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
    virtual std::list<Package>::const_iterator begin() = 0;
    virtual std::list<Package>::const_iterator cbegin() = 0;
    virtual std::list<Package>::const_iterator end() = 0;
    virtual std::list<Package>::const_iterator* cend() = 0;
    virtual ~IPackageStockpile() = default;
};


class IPackageQueue: public IPackageStockpile {
public:
    virtual Package pop() = 0;
    virtual PackageQueueType get_queue_type() = 0;
};


class PackageQueue: public IPackageStockpile {
public:
    PackageQueue(PackageQueueType queueType) : queueType_(queueType) {}

    void push(Package& apackage);

    bool empty() const { return storageplace_.empty();}

    std::size_t size() const { return storageplace_.size(); }

    std::list<Package>::const_iterator cbegin() const { return storageplace_.cbegin(); }

    std::list<Package>::const_iterator cend() const { return storageplace_.cend(); }

    std::list<Package>::const_iterator begin() const { return storageplace_.cbegin(); }

    std::list<Package>::const_iterator end() const { return storageplace_.cend(); }

    Package pop();

    PackageQueueType get_queue_type() const { return queueType_; }

private:
    const PackageQueueType queueType_;

    std::list<Package> storageplace_;
};


#endif //ZPO_SERWERY_STORAGE_TYPES_HPP
