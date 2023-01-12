//
// Created by janro on 05-Jan-23.
//

#ifndef ZPO_SERWERY_TYPES_HPP
#define ZPO_SERWERY_TYPES_HPP
#include <functional>

using ElementID = unsigned int;
using Time = unsigned int;
using TimeOffset = int;
using ProbabilityGenerator = std::function<double()>;
#endif //ZPO_SERWERY_TYPES_HPP
