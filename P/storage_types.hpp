//
// Created by janro on 05-Jan-23.
//

#ifndef ZPO_SERWERY_STORAGE_TYPES_HPP
#define ZPO_SERWERY_STORAGE_TYPES_HPP

#include <list>
#include "package.hpp"
#include "types.hpp"
enum PackageQueueType{
    FIFO,
    LIFO
};

class IPackageStockpile {
public:
    virtual void push(Package&& apackage) = 0;
    virtual bool empty() = 0;
    virtual std::size_t size() = 0;
    /*iteratory*///FIXME trzeba będzie zmienić typ na ten zjebany z vektora/list????????????????
    virtual int* begin() = 0;
    virtual int* cbegin() = 0;
    virtual int* end() = 0;
    virtual int* cend() = 0;
    virtual ~IPackageStockpile() = default;

};

class IPackageQueue: IPackageStockpile {
public:
    virtual Package pop() = 0;
    virtual PackageQueueType get_queue_type() = 0;
private:
    PackageQueueType pkcQtype;
};

class PackageQueue: IPackageStockpile {
public:
    //TODO
    PackageQueue(PackageQueueType pqtype);

private:
    std::list<Package> storageplace;
};


#endif //ZPO_SERWERY_STORAGE_TYPES_HPP
