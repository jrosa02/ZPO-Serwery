//
// Created by janro on 13.01.2023.
//
#include "factory.hpp"

bool Factory::is_ramp_consistent(Ramp* ramp) const {
    
    return 1; //FIXME
}

bool Factory::is_consistent() const {
    enum NODE_COLOR{UNVISITED, VISITED, VERYFIED};
    return 1; //FIXME
};

void Factory::do_deliveries(Time t) {
    for(auto& ramp: rampCol_){
        ramp.deliver_goods(t);
    }
};

void Factory::do_package_passing() {

};

void Factory::do_work(Time t) {
    for(auto& worker: workerCol_){
        worker.do_work(t);
    }
}