//
// Created by janro on 05-Jan-23.
//

#include "storage_types.hpp"


void PackageQueue::push(Package&& apackage){
    switch(queueType_){
        case FIFO:
            storageplace_.emplace_front(std::move(apackage));
            break;

        case LIFO:
            storageplace_.emplace_back(std::move(apackage));
            break;
    }
}


Package PackageQueue::pop(){
    switch(queueType_){
        case FIFO:
            // Nie ma breaka, więc wykonają się instrukcje z bloku poniżej
        case LIFO:
            Package first_elem = std::move(*storageplace_.begin());
            storageplace_.pop_front();
            return first_elem;
            break;
    }
}

