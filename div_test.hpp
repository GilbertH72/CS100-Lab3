#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "div.hpp"

TEST(DivTest, DivEvaluateNonZero) {
    Div* test = new Div(new Op(6), new Op(3));
    EXPECT_EQ(test->evaluate(), 2);
}

TEST(DivTest, DivStringifyNonZero) {
    Div* test = new Div(new Op(6), new Op(3));
    EXPECT_EQ(test->stringify(), "6 / 3");
}

TEST(DivTest, DivEvaluateZero) {
    Div* test = new Div(new Op(0), new Op(1));
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(DivTest, DivStringifyZero) {
    Div* test = new Div(new Op(0), new Op(1));
    EXPECT_EQ(test->stringify(), "0 / 1");
}

TEST(DivTest, DivEvaluateNegativeNonZero) {
    Div* test = new Div(new Op(-8), new Op(2));
    EXPECT_EQ(test->evaluate(), -4);
}

TEST(DivTest, DivStringifyNegativeNonZero) {
    Div* test = new Div(new Op(-8), new Op(2));
    EXPECT_EQ(test->stringify(), "-8 / 2");
}

#endif

