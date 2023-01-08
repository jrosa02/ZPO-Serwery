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
    virtual bool empty() const = 0;
    virtual std::size_t size() const = 0;
    virtual std::list<Package>::const_iterator begin() const= 0;
    virtual std::list<Package>::const_iterator cbegin() const= 0;
    virtual std::list<Package>::const_iterator end() const= 0;
    virtual std::list<Package>::const_iterator cend() const= 0;
    virtual ~IPackageStockpile() = default;
};


class IPackageQueue: public IPackageStockpile {
public:
    virtual Package pop() = 0;
    virtual PackageQueueType get_queue_type() const = 0;
};


class PackageQueue: public IPackageQueue {
public:
    PackageQueue(PackageQueueType queueType) : queueType_(queueType), IPackageQueue() {};

    void push(Package&& apackage) override;

    bool empty() const override { return storageplace_.empty();};

    std::size_t size() const override { return storageplace_.size(); };

    std::list<Package>::const_iterator cbegin() const override{ return storageplace_.cbegin(); };

    std::list<Package>::const_iterator cend() const override{ return storageplace_.cend(); };

    std::list<Package>::const_iterator begin() const { return storageplace_.begin(); };

    std::list<Package>::const_iterator end() const { return storageplace_.end(); };

    Package pop();

    PackageQueueType get_queue_type() const { return queueType_; };


private:
    const PackageQueueType queueType_;

    std::list<Package> storageplace_;
};


#endif //ZPO_SERWERY_STORAGE_TYPES_HPP
