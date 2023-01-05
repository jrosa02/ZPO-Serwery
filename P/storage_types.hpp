//
// Created by janro on 05-Jan-23.
//

#ifndef ZPO_SERWERY_STORAGE_TYPES_HPP
#define ZPO_SERWERY_STORAGE_TYPES_HPP

#include "package.hpp"
#include "types.hpp"
enum PackageQueueType{
    FIFO,
    LIFO
};

class IPackageStockpile {
    void push(Package&& apackage);
    bool empty();
    //TODO WTF is sizetype
    //sizetype size();
    //iteratory
    ~IPackageStockpile() = default;

};

class IPackageQueue {
    virtual Package pop();
    virtual PackageQueueType get_queue_type();
};

class PackageQueue {
    PackageQueue(PackageQueueType pqtype);
};


#endif //ZPO_SERWERY_STORAGE_TYPES_HPP
