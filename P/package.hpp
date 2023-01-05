//
// Created by janro on 05-Jan-23.
//

#ifndef ZPO_SERWERY_PACKAGE_HPP
#define ZPO_SERWERY_PACKAGE_HPP
#include "types.hpp"

class Package {
    Package();
    Package(ElementID id);
    Package(Package&& apackage);
    Package& operator=(Package&&);
    ~Package() = default;
};


#endif //ZPO_SERWERY_PACKAGE_HPP
