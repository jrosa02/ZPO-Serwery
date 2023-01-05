//
// Created by janro on 05-Jan-23.
//

#ifndef ZPO_SERWERY_PACKAGE_HPP
#define ZPO_SERWERY_PACKAGE_HPP

#include <vector>
#include "types.hpp"

class Package {
public:
    Package();
    Package(ElementID id2assign);
    //TODO
    Package(Package&& apackage);
    //TODO
    Package& operator=(Package&&);
    ElementID get_ID() const {return elementId;};
    ~Package();

private:
    ElementID elementId;
    static std::vector<ElementID> assigned_IDs;
    static std::vector<ElementID> freed_IDs;
};




#endif //ZPO_SERWERY_PACKAGE_HPP
