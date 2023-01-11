//
// Created by janro on 05-Jan-23.
//

#include "storage_types.hpp"


void PackageQueue::push(Package&& apackage) {
    switch (queueType_) {
        case LIFO:
            storageplace_.emplace_front(std::move(apackage));
            break;

        case FIFO:
            storageplace_.emplace_back(std::move(apackage));
            break;
    }
}


Package PackageQueue::pop() {
    ElementID newID = storageplace_.begin()->get_id();
    storageplace_.pop_front();
    return Package(newID);
}

