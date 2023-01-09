//
// Created by janro on 05-Jan-23.
//

#ifndef ZPO_SERWERY_PACKAGE_HPP
#define ZPO_SERWERY_PACKAGE_HPP

#include <vector>
#include <set>
#include <list>
#include "types.hpp"

class Package {
public:
    Package();
    explicit Package(ElementID id2assign);
    Package(Package&& apackage) noexcept: elementId_(apackage.get_id()) {};
    Package& operator=(Package&& other) noexcept {return *this;};
    ElementID get_id() const {return elementId_;};
    ~Package();

private:
    ElementID elementId_;
    static std::list<ElementID> inline assigned_IDs_{};
    static std::list<ElementID> inline freed_IDs_{0};
};



#endif //ZPO_SERWERY_PACKAGE_HPP
