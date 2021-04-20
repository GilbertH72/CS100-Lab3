#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "sub.hpp"
#include "add.hpp"

TEST(SubTest, SubEvaluateNonZero) {
    Sub* test = new Sub(new Op(5), new Op(2));
    EXPECT_EQ(test->evaluate(), 3);
}

TEST(SubTest, SubStringifyNonZero) {
    Sub* test = new Sub(new Op(5), new Op(2));
    EXPECT_EQ(test->stringify(), "5 - 2");
}

TEST(SubTest, SubEvaluateZero) {
    Sub* test = new Sub(new Op(4), new Op(4));
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(SubTest, SubStringifyZero) {
    Sub* test = new Sub(new Op(4), new Op(4));
    EXPECT_EQ(test->stringify(), "4 - 4");
}

TEST(SubTest, SubEvaluateNegativeNonZero) {
    Sub* test = new Sub(new Op(7), new Op(9));
    EXPECT_EQ(test->evaluate(), -2);
}

TEST(SubTest, SubStringifyNegativeNonZero) {
    Sub* test = new Sub(new Op(7), new Op(9));
    EXPECT_EQ(test->stringify(), "7 - 9");
}

TEST(SubTest, SubEvaluateAddNonZero) {
    Sub* test = new Sub(new Add(new Op(6), new Op(8)), new Op(10));
    EXPECT_EQ(test->evaluate(), 4);
}

TEST(SubTest, SubStringifyAddNonZero) {
    Sub* test = new Sub(new Add(new Op(6), new Op(8)), new Op(10));
    EXPECT_EQ(test->stringify(), "6 + 8 - 10");
}

#endif
