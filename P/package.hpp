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
    Package(Package&& apackage) {elementId = apackage.get_ID(); };
    Package& operator=(Package&& other) { return *this;};
    ElementID get_ID() const {return elementId;};
    ~Package();

private:
    ElementID elementId;
    static std::vector<ElementID> assigned_IDs;
    static std::vector<ElementID> freed_IDs;
};

class dummy{
public:
    dummy() = default;
    ~dummy() = default;
    int a;
};



#endif //ZPO_SERWERY_PACKAGE_HPP
