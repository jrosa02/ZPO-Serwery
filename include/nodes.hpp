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

class IPackageReceiver{
public:
    virtual void receive_package(Package&& p) = 0;
    virtual ElementID get_id() const = 0;

};

class Storehouse{
public:
    Storehouse(ElementID id, std::unique_ptr<IPackageStockpile> d);
};

//FIXME nie wiem co za typ te preferencje
using preferences_t = std::map<IPackageReceiver*, ProbabilityGenerator>;

class ReceiverPreferences{
public:
    ReceiverPreferences(ProbabilityGenerator pg);
    void add_receiver(IPackageReceiver* r);
    void remove_receiver(IPackageReceiver* r);
    IPackageReceiver* choose_receiver();
    preferences_t& get_preferences() ;

private:
    preferences_t preferences;
};

class PackageSender{
public:
    PackageSender(PackageSender&& ps);
    void send_package();
    std::optional<Package>& get_sending_buffer() const;
protected:
    void push_package(Package&& aPackage);
};

class Ramp{
public:
    Ramp(ElementID id, TimeOffset di);
    void deliver_goods(Time t);
    TimeOffset get_delivery_interval() const;
    ElementID get_id() const;
};

class Worker{
public:
    Worker(ElementID id, TimeOffset pd, std::unique_ptr<IPackageQueue> q);
    void do_work(Time t);
    TimeOffset get_processing_duration() const;
    Time get_package_processing_start_time() const;
};
#endif //ZPO_SERWERY_NODES_HPP
