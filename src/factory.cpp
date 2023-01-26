//
// Created by janro on 13.01.2023.
//
#include "factory.hpp"

bool Factory::has_reachable_storage(const PackageSender* sender,
                                    std::map<const PackageSender*, NodeColor>& node_colors) const {
    if (node_colors[sender] == VERIFIED)
        return true;

    node_colors[sender] = VISITED;

    const ReceiverPreferences::preferences_t pref = sender->receiver_preferences_.get_preferences();
    if (pref.empty())
        throw std::logic_error("No receivers!");

    bool is_any_other_receiver = false;

    for (const auto& receiver: pref) {
        if (receiver.first->get_receiver_type() == STOREHOUSE)
            is_any_other_receiver = true;
        else if (receiver.first->get_receiver_type() == WORKER) {
            IPackageReceiver* receiver_ptr = receiver.first;
            auto worker_ptr = dynamic_cast<Worker*>(receiver_ptr);
            auto sendrecv_ptr = dynamic_cast<PackageSender*>(worker_ptr);

            if (sendrecv_ptr == sender)
                continue;

            is_any_other_receiver = true;

            if (node_colors[sendrecv_ptr] == NOTVISITED)
                has_reachable_storage(sendrecv_ptr, node_colors);
        }
    }

    node_colors[sender] = VERIFIED;

    if (is_any_other_receiver)
        return true;
    else
        throw std::logic_error("No other receivers!");
}

bool Factory::is_consistent() const {
    std::map<const PackageSender*, NodeColor> color;

    for (auto& node: workerCol_)
        color.insert({&node, NOTVISITED});
    for (auto& node: rampCol_)
        color.insert({&node, NOTVISITED});

    try {
        for (auto& ramp: rampCol_) {
            has_reachable_storage(&ramp, color);
        }
    }
    catch (std::logic_error&) {
        return false;
    }

    return true;
}

void Factory::do_deliveries(Time t) {
    for (auto& ramp: rampCol_)
        ramp.deliver_goods(t);
}

void Factory::do_package_passing() {
    for (auto& ramp: rampCol_)
        ramp.send_package();
    for (auto& worker: workerCol_)
        worker.send_package();
}

void Factory::do_work(Time t) {
    for (auto& worker: workerCol_)
        worker.do_work(t);
}