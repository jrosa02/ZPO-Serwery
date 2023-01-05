//
// Created by janro on 05-Jan-23.
//

#ifndef ZPO_SERWERY_PACKAGE_HPP
#define ZPO_SERWERY_PACKAGE_HPP

#include <vector>
#include "types.hpp"

class Package {
public:
    //TODO
    Package();
    //TODO
    Package(ElementID id);
    //TODO
    Package(Package&& apackage);
    //TODO
    Package& operator=(Package&&);
    //TODO
    ElementID get_ID() const {return elementId;};
    //TODO
    ~Package();

private:
    ElementID elementId;
    static std::vector<ElementID> assigned_IDs;
    static std::vector<ElementID> freed_IDs;

};


#endif //ZPO_SERWERY_PACKAGE_HPP
