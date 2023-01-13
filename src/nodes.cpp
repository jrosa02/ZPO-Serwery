//
// Created by janro on 12-Jan-23.
//
#include <numeric>
#include "nodes.hpp"

//Storehouse

//Receiver Prefferences

//void ReceiverPreferences::add_receiver(IPackageReceiver *r) {
//    double _random = pg_();
//    preferences_.insert(std::pair(r, _random));
//    double P_sum = std::accumulate(preferences_.begin(), preferences_.end(), 0,
//                                   [](double sum, auto other) { return sum + std::get<1>(other); });
//
//    auto _first = preferences_.begin();
//    auto _last = preferences_.end();
//    //for (; _first != _last; ++_first) //FIXME kurwa nie wiem
//        //*_first = std::move(std::pair(std::get<0>(*_first),std::get<1>(*_first)/P_sum));
//
//}

void ReceiverPreferences::remove_receiver(IPackageReceiver *r) {
    preferences_.erase(r);
}

IPackageReceiver* ReceiverPreferences::choose_receiver() const {
    double _random = pg_();
    auto _first = preferences_.begin();
    auto _last = preferences_.end();
    for (; _first != _last; ++_first) {
        _random -= std::get<1>(*_first);
        if (_random <= 0)
            return std::get<0>(*_first);
    }
    return std::get<0>(*_last);
}

//PackageSender

void PackageSender::send_package() {};

void PackageSender::push_package(Package &&aPackage) {
    sender_buffer_ = std::move(aPackage);
}

//Ramp
void Ramp::deliver_goods(Time t) {
    if(t % deliverycooldown_ == 0)
        push_package(Package());
}

//Worker

void Worker::do_work(Time t) {
    if(!up2PackQueue_->empty() && workingBuffer_.has_value()){
        workingBuffer_ = up2PackQueue_->pop();
        procStartTime_ = t;
    }
    if(t - procStartTime_ <= processing_duration_){
        push_package(std::move(workingBuffer_.value()));
        workingBuffer_.reset();
    }
}