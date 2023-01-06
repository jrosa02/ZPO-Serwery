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
    Package(Package&& apackage) { elementId_ = apackage.get_ID(); };
    Package& operator=(Package&& other) { return *this;};
    ElementID get_ID() const {return elementId_;};
    ~Package();

private:
    ElementID elementId_;
    static std::vector<ElementID> assigned_IDs_;
    static std::vector<ElementID> freed_IDs_;
};

class dummy{
public:
    dummy() = default;
    ~dummy() = default;
    int a;
};



#endif //ZPO_SERWERY_PACKAGE_HPP
