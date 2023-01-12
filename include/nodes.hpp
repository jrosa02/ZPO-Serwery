//
// Created by janro on 12-Jan-23.
//

#ifndef ZPO_SERWERY_NODES_HPP
#define ZPO_SERWERY_NODES_HPP

#include <memory>
#include <map>
#include "types.hpp"
#include "storage_types.hpp"

enum RecieverType{

};

class IPackageReceiver{
public:
    vitrual void receive_package(Package&& p) = 0;
    virtual ElementID get_id() const = 0;

};

class Storehouse{
public:
    Storehouse(ElementID id, std::unique_ptr<IPackageStockpile> d);
};

using preferences_t = std::map<IPackageReceiver*, ProbabilityGenerator>
class ReceiverPreferences{
public:
    ReceiverPreferences(ProbabilityGenerator pg);
    void add_receiver(IPackageReceiver* r);
    void remove_receiver(IPackageReceiver* r);
    IPackageReceiver* choose_receiver();
    preferences

private:
    preferences_t;
};

class PackageSender{

};

class Ramp{

};

class Worker{

};
#endif //ZPO_SERWERY_NODES_HPP
