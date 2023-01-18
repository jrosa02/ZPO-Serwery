//
// Created by janro on 12-Jan-23.
//
#include <numeric>
#include "nodes.hpp"

//Storehouse

//Receiver Prefferences


void ReceiverPreferences::add_receiver(IPackageReceiver *r) {
    // Teraz jest tak, że dodawany odbiorca ma przypisywany losowe prawwdopodobieństwo od 0 do 0.5
    // wydaje mi się, że testy oczekują, że będzie dostawał zawsze 0.5, albo tyle, żeby wszytskie miały po równo.
    double _random = pg_();
    preferences_.emplace(std::pair(r, _random));
    double P_sum = std::accumulate(preferences_.begin(), preferences_.end(), 0.0, [](double sum, std::pair<IPackageReceiver*, double> other) { return sum + std::get<double>(other); });
    for(auto [rec, prob]: preferences_){
        preferences_[rec] = prob/P_sum;
    }
}

void ReceiverPreferences::remove_receiver(IPackageReceiver *r) {
    preferences_.erase(r);
    double P_sum = std::accumulate(preferences_.begin(), preferences_.end(), 0.0, [](double sum, std::pair<IPackageReceiver*, double> other) { return sum + std::get<double>(other); });
    for(auto [rec, prob]: preferences_){
        preferences_[rec] = prob/P_sum;
    }
}

IPackageReceiver* ReceiverPreferences::choose_receiver() const {
    double prob = pg_();
    for(auto[rec, p]: preferences_){
        prob -= p;
        if(prob <= 0)
            return rec;
    };
    return nullptr;
}

//PackageSender
void PackageSender::send_package() {
    if(sender_buffer_){
        receiver_preferences_.choose_receiver()->receive_package(std::move(sender_buffer_.value()));
        sender_buffer_.reset();
    }
};

void PackageSender::push_package(Package &&aPackage) {
    if (!sender_buffer_.has_value())
        sender_buffer_ = std::move(aPackage);
}

//Ramp
void Ramp::deliver_goods(Time t) {
    if(t % deliverycooldown_ == 1)
        push_package(Package());
}

//Worker
void Worker::do_work(Time t) {
    if(!up2PackQueue_->empty() && !workingBuffer_.has_value()){
        workingBuffer_ = up2PackQueue_->pop();
        procStartTime_ = t;
    }
    if(t - procStartTime_ <= processing_duration_){
        push_package(std::move(workingBuffer_.value()));
        workingBuffer_.reset();
    }
}