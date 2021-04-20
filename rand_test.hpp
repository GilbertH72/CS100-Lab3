#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "rand.hpp"

TEST(RandTest, RandEvaluateNonZero) {
    Rand* test = new Rand();
    EXPECT_LT(test->evaluate(), 100);
}

TEST(RandTest, RandStringifyNonZero) {
    Rand* test = new Rand();
    EXPECT_EQ(test->stringify(), "86");
}

#endif
