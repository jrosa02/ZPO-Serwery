//
// Created by janro on 05-Jan-23.
//

#include <algorithm>
#include <iostream>
#include "package.hpp"

Package::Package() {
    if(!freed_IDs_.empty()){
        auto p2newID = std::min_element(freed_IDs_.begin(), freed_IDs_.end());
        elementId_ = *p2newID;
        assigned_IDs_.insert(*p2newID);
        freed_IDs_.erase(*p2newID);
    }else{
        ElementID newID = (*std::max_element(assigned_IDs_.begin(), assigned_IDs_.end())) + 1;
        elementId_ = newID;
        assigned_IDs_.insert(newID);
    }
;
};

Package::Package(ElementID id2assign) {
    if(std::find(assigned_IDs_.begin(), assigned_IDs_.end(), id2assign) == assigned_IDs_.end()){
        elementId_ = id2assign;
        assigned_IDs_.insert(id2assign);
    }else{
        //FIXME nie wiem co ma być w tym przypadku
        ElementID newID = (*std::max_element(assigned_IDs_.begin(), assigned_IDs_.end())) + 1;
        elementId_ = newID;
        assigned_IDs_.insert(newID);
    }
};

Package::~Package() {
    auto p2IDfreed = std::find(assigned_IDs_.begin(), assigned_IDs_.end(), elementId_);
    //if (p2IDfreed == assigned_IDs_.end())
        //FIXME jak coś się zepsuje to wyrzuci
        //throw std::exception();
    freed_IDs_.insert(elementId_);
    //std::cout<<"DelID->"<<elementId_ << ' ';
    assigned_IDs_.erase(elementId_);
};

