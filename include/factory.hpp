//
// Created by janro on 12-Jan-23.
//

#ifndef ZPO_SERWERY_FACTORY_HPP
#define ZPO_SERWERY_FACTORY_HPP
#include "nodes.hpp"

class NodeCollection{
public:
    void add(Node&&);
    void remove_by_id(ElementID id);
    iterator find_by_id(ElementID);
    const iterator find_by_id(ElementID id) const;
private:

};

class Factory{

};

#endif //ZPO_SERWERY_FACTORY_HPP
