//
// Created by janro on 05.01.2023.
//
//
// Created by janro on 05.01.2023.
//
#include "gtest/gtest.h"
#include "package.hpp"

TEST(Package, Constructor){
    int count = 10;
    Package p[count];
    for(int i = 0; i < count; i++){
        p[i] = Package();
    }
//    for (int i = 0; i < count; ++i) {
//        for(int j = i + 1; j < count; ++j){
//            EXPECT_FALSE(p[i].get_ID() == p[j].get_ID());
//        }
//    }
    EXPECT_EQ(2*2, 4);
    EXPECT_EQ(3, 4);
};