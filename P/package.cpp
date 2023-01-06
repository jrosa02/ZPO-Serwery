//
// Created by janro on 05-Jan-23.
//

#include <algorithm>
#include "package.hpp"

Package::Package() {
    
    if(freed_IDs.empty()){
        auto p2newID = std::min(freed_IDs.begin(), freed_IDs.end());
        elementId = *p2newID;
        freed_IDs.erase(p2newID);
        assigned_IDs.push_back(*p2newID);
    }else{
        ElementID newID = (*std::max(freed_IDs.begin(), freed_IDs.end())) + 1;
        elementId = newID;
        assigned_IDs.push_back(newID);
    }
};

Package::Package(ElementID id2assign) {
    if(std::find(assigned_IDs.begin(), assigned_IDs.end(), id2assign) == assigned_IDs.end()){
        elementId = id2assign;
        assigned_IDs.push_back(id2assign);
    }else{
        //FIXME nie wiem co ma być w tym przypadku
        elementId = (*std::max(freed_IDs.begin(), freed_IDs.end())) + 1;
    }
};

Package::~Package() {
    auto p2IDfreed = std::find(assigned_IDs.begin(), assigned_IDs.end(), elementId);
    if (p2IDfreed == assigned_IDs.end())
        //FIXME jak coś się zepsuje to wyrzuci
        //throw std::exception();
    assigned_IDs.erase(p2IDfreed);
    freed_IDs.push_back(*p2IDfreed);

};

