//
// Created by janro on 12-Jan-23.
//

#ifndef ZPO_SERWERY_FACTORY_HPP
#define ZPO_SERWERY_FACTORY_HPP

#include "nodes.hpp"

enum NodeColor {
    NOTVISITED,
    VISITED,
    VERIFIED
};

template<class Node>
class NodeCollection {
public:
    using container_t = typename std::list<Node>; //FIXME nie wiem jaki kontener

    using iterator = typename container_t::iterator;

    using const_iterator = typename container_t::const_iterator;

    void add(Node&& aNode) { container_.push_back(std::move(aNode)); };

    iterator find_by_id(ElementID id) {
        return std::find_if(container_.begin(), container_.end(),
                            [&id](const auto& elem) { return elem.get_id() == id; });
    };

    [[nodiscard]] const_iterator find_by_id(ElementID id) const {
        return std::find_if(container_.begin(), container_.end(), [&id](const auto& elem) {
            return elem.get_id() == id;
        });
    };

    void remove_by_id(ElementID id) { container_.erase(find_by_id(id)); };

    [[nodiscard]] const_iterator cbegin() const { return container_.cbegin(); };

    [[nodiscard]] const_iterator cend() const { return container_.cend(); };

    const_iterator begin() const { return container_.begin(); };

    const_iterator end() const { return container_.end(); };

private:
    container_t container_;
};

class Factory {
public:
    //RAMP
    void add_ramp(Ramp&& aramp) { rampCol_.add(std::move(aramp)); };

    NodeCollection<Ramp>::iterator find_ramp_by_id(ElementID id) { return rampCol_.find_by_id(id); };

    void remove_ramp(ElementID id) { rampCol_.remove_by_id(id); };

    [[nodiscard]] NodeCollection<Ramp>::const_iterator find_ramp_by_id(ElementID id) const {
        return rampCol_.find_by_id(id);
    };

    [[nodiscard]] NodeCollection<Ramp>::const_iterator ramp_cbegin() const { return rampCol_.cbegin(); };

    [[nodiscard]] NodeCollection<Ramp>::const_iterator ramp_cend() const { return rampCol_.cend(); };

    //WORKER
    void add_worker(Worker&& aworker) { workerCol_.add(std::move(aworker)); };

    NodeCollection<Worker>::iterator find_worker_by_id(ElementID id) { return workerCol_.find_by_id(id); };

    void remove_worker(ElementID id) { workerCol_.remove_by_id(id); };

    [[nodiscard]] NodeCollection<Worker>::const_iterator
    find_worker_by_id(ElementID id) const { return workerCol_.find_by_id(id); };

    [[nodiscard]] NodeCollection<Worker>::const_iterator worker_cbegin() const { return workerCol_.cbegin(); };

    [[nodiscard]] NodeCollection<Worker>::const_iterator worker_cend() const { return workerCol_.cend(); };

    //STOREHOUSE

    void add_storehouse(Storehouse&& astorehouse) { storehouseCol_.add(std::move(astorehouse)); };

    NodeCollection<Storehouse>::iterator find_storehouse_by_id(ElementID id) { return storehouseCol_.find_by_id(id); };

    void remove_storehouse(ElementID id) { storehouseCol_.remove_by_id(id); };

    [[nodiscard]] NodeCollection<Storehouse>::const_iterator
    find_storehouse_by_id(ElementID id) const { return storehouseCol_.find_by_id(id); };

    [[nodiscard]] NodeCollection<Storehouse>::const_iterator
    storehouse_cbegin() const { return storehouseCol_.cbegin(); };

    [[nodiscard]] NodeCollection<Storehouse>::const_iterator storehouse_cend() const { return storehouseCol_.cend(); };

    bool is_consistent() const;

    void do_deliveries(Time t);

    void do_package_passing();

    void do_work(Time t);

private:
    void remove_receiver(NodeCollection<IPackageReceiver>& collection, ElementID id);

    bool
    has_reachable_storage(const PackageSender* sender, std::map<const PackageSender*, NodeColor>& node_colors) const;

    NodeCollection<Worker> workerCol_;
    NodeCollection<Ramp> rampCol_;
    NodeCollection<Storehouse> storehouseCol_;
};

#endif //ZPO_SERWERY_FACTORY_HPP
