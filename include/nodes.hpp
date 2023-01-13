//
// Created by janro on 12-Jan-23.
//

#ifndef ZPO_SERWERY_NODES_HPP
#define ZPO_SERWERY_NODES_HPP

#include <memory>
#include <map>
#include <optional>
#include "types.hpp"
#include "storage_types.hpp"

enum RecieverType{

};


class IPackageReceiver: public IPackageStockpile{
public:
    virtual void receive_package(Package&& p) = 0;

    [[nodiscard]] virtual ElementID get_id() const = 0;
};


class Storehouse: public IPackageReceiver{
public:
    Storehouse(ElementID id, std::unique_ptr<IPackageStockpile> d): id_(id) {up2iPackageStockpile = std::move(d);};

    void receive_package(Package&& aPackage) override {up2iPackageStockpile->push(std::move(aPackage));};

    [[nodiscard]] ElementID get_id() const override {return id_;};

private:
    ElementID id_;

    std::unique_ptr<IPackageStockpile> up2iPackageStockpile;
};


using preferences_t = std::map<IPackageReceiver*, double>;
using const_iterator = preferences_t::const_iterator;


class ReceiverPreferences{
public:
    explicit ReceiverPreferences(ProbabilityGenerator pg): pg_(pg) {};

    void add_receiver(IPackageReceiver* r);

    void remove_receiver(IPackageReceiver* r);

    [[nodiscard]] IPackageReceiver* choose_receiver() const;

    [[nodiscard]] preferences_t& get_preferences() {return preferences_;};

private:
    const ProbabilityGenerator pg_;
    preferences_t preferences_;
};


class PackageSender{
public:
    PackageSender(PackageSender&& ps) = default; //Ma być default;

    void send_package();

    [[nodiscard]] std::optional<Package>& get_sending_buffer() {return buffer_;};

protected:
    void push_package(Package&& aPackage);

private:
    std::optional<Package> buffer_;

    ReceiverPreferences receiver_preferences_;
};


class Ramp: PackageSender{
public:
    Ramp(ElementID id, TimeOffset di): PackageSender(), id_(id), timeoffset_(di) {};

    void deliver_goods(Time t);

    [[nodiscard]] TimeOffset get_delivery_interval() const {return timeoffset_;};

    [[nodiscard]] ElementID get_id() const {return id_; };
private:
    ElementID id_;
    TimeOffset timeoffset_;
    Package buffer_;
};

class Worker: public IPackageReceiver{
public:
    Worker(ElementID id, TimeOffset pd, std::unique_ptr<IPackageQueue> q): id_(id), processing_duration_(pd), up2PackQueue_(std::move(q)) {};

    void do_work(Time t);

    [[nodiscard]] TimeOffset get_processing_duration() const {return processing_duration_;};

    [[nodiscard]] Time get_package_processing_start_time() const {return procStartTime_;};

private:
    ElementID id_;
    TimeOffset processing_duration_;
    std::unique_ptr<IPackageQueue> up2PackQueue_;
    Time procStartTime_; //TODO
    Package workingBuffer_
};
#endif //ZPO_SERWERY_NODES_HPP
