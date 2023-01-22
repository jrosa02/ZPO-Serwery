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
#include "helpers.hpp"
#include "config.hpp"

enum ReceiverType {
    WORKER,
    STOREHOUSE
};


class IPackageReceiver {
public:
    virtual void receive_package(Package&& aPackage) = 0;

    [[nodiscard]] virtual ElementID get_id() const = 0;

    virtual ~IPackageReceiver() = default;

#ifdef WITH_RECEIVER_TYPE

    [[nodiscard]] virtual ReceiverType get_receiver_type() const = 0;

#endif
};


class Storehouse : public IPackageReceiver {
public:
    explicit Storehouse(ElementID id,
                        std::unique_ptr<IPackageStockpile> d = std::make_unique<PackageQueue>(PackageQueue(LIFO))) :
            id_(id) { up2iPackageStockpile = std::move(d); };

    //IPackageReceiver
    [[nodiscard]] ElementID get_id() const override { return id_; };

    void receive_package(Package&& aPackage) override { up2iPackageStockpile->push(std::move(aPackage)); };

#ifdef WITH_RECEIVER_TYPE

    [[nodiscard]] ReceiverType get_receiver_type() const override { return ReceiverType::STOREHOUSE; };
#endif

private:
    ElementID id_;
    std::unique_ptr<IPackageStockpile> up2iPackageStockpile;
};


using preferences_t = std::map<IPackageReceiver*, double>;
using const_iterator = preferences_t::const_iterator;
using iterator = preferences_t::iterator;


class ReceiverPreferences {
public:
    explicit ReceiverPreferences(ProbabilityGenerator pg = probability_generator) : pg_(pg) {};

    void add_receiver(IPackageReceiver* r);

    void remove_receiver(IPackageReceiver* r);

    [[nodiscard]] IPackageReceiver* choose_receiver() const;

    [[nodiscard]] const preferences_t& get_preferences() const { return preferences_; };

    //iteratory
    iterator begin() { return preferences_.begin(); }

    iterator end() { return preferences_.end(); }

    const_iterator begin() const { return preferences_.begin(); }

    const_iterator end() const { return preferences_.end(); }

    const_iterator cbegin() const { return preferences_.cbegin(); }

    const_iterator cend() const { return preferences_.cend(); }

private:
    const ProbabilityGenerator pg_;
    preferences_t preferences_;
};


class PackageSender {
public:
    PackageSender() = default; //FIXME nie wiem czy to legalne

    PackageSender(PackageSender&& ps) = default; //Ma być default;

    void send_package();

    [[nodiscard]] std::optional<Package>& get_sending_buffer() { return sender_buffer_; };

    ReceiverPreferences receiver_preferences_;

protected:
    void push_package(Package&& aPackage);

private:
    std::optional<Package> sender_buffer_;
};


class Ramp : public PackageSender {
public:
    Ramp(ElementID id, TimeOffset di) : PackageSender(), id_(id), deliverycooldown_(di) {};

    void deliver_goods(Time t);

    [[nodiscard]] TimeOffset get_delivery_interval() const { return deliverycooldown_; };

    [[nodiscard]] ElementID get_id() const { return id_; };

private:
    ElementID id_;
    TimeOffset deliverycooldown_;
    Package buffer_;
};

class Worker : public IPackageReceiver, public PackageSender {
public:
    Worker(ElementID id, TimeOffset pd, std::unique_ptr<IPackageQueue> q) : id_(id), processing_duration_(pd),
                                                                            up2PackQueue_(std::move(q)) {};

    void do_work(Time t);

    [[nodiscard]] TimeOffset get_processing_duration() const { return processing_duration_; };

    [[nodiscard]] Time get_package_processing_start_time() const { return procStartTime_; };

    //IPackageReceiver
    [[nodiscard]] ElementID get_id() const override { return id_; };

    void receive_package(Package&& p) override { up2PackQueue_->push(std::move(p)); };

#ifdef WITH_RECEIVER_TYPE

    [[nodiscard]] ReceiverType get_receiver_type() const override { return ReceiverType::WORKER; };
#endif

private:
    ElementID id_;
    TimeOffset processing_duration_;
    std::unique_ptr<IPackageQueue> up2PackQueue_;
    Time procStartTime_;
    std::optional<Package> workingBuffer_;
};

#endif //ZPO_SERWERY_NODES_HPP
