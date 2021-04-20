#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"
#include "mult.hpp"
#include "add.hpp"
#include "base.hpp"
#include "op.hpp"

TEST(MultTest, MultEvaluatePositiveInts) {
   Op* op1 = new Op(6);
   Op* op2 = new Op(7);
   Mult* test = new Mult(op1, op2);
   EXPECT_EQ(test->evaluate(), 42);
}

TEST(MultTest, MultStringifyPositiveInts) {
   Op* op1 = new Op(4);
   Op* op2 = new Op(10);
   Mult* test = new Mult(op1, op2);
   EXPECT_EQ(test->stringify(), "4 * 10");
}

TEST(MultTest, MultEvaluateNegativeInts) {
   Op* op1 = new Op(-6);
   Op* op2 = new Op(-7);
   Mult* test = new Mult(op1, op2);
   EXPECT_EQ(test->evaluate(), 42);
}

TEST(MultTest, MultStringifyNegativeInts) {
   Op* op1 = new Op(-4);
   Op* op2 = new Op(-10);
   Mult* test = new Mult(op1, op2);
   EXPECT_EQ(test->stringify(), "-4 * -10");
}

TEST(MultTest, MultEvaluatePositiveDoubles) {
   Op* op1 = new Op(6.3);
   Op* op2 = new Op(7.8);
   Mult* test = new Mult(op1, op2);
   EXPECT_EQ(test->evaluate(), 49.14);
}

TEST(MultTest, MultStringifyPositiveDoubles) {
   Op* op1 = new Op(4.5);
   Op* op2 = new Op(10.2);
   Mult* test = new Mult(op1, op2);
   EXPECT_EQ(test->stringify(), "4.5 * 10.2");
}

TEST(MultTest, MultEvaluateNegativeDoubles) {
   Op* op1 = new Op(-6.3);
   Op* op2 = new Op(-7.8);
   Mult* test = new Mult(op1, op2);
   EXPECT_EQ(test->evaluate(), 49.14);
}

TEST(MultTest, MultStringifyNegativeDoubles) {
   Op* op1 = new Op(-4.5);
   Op* op2 = new Op(-10.2);
   Mult* test = new Mult(op1, op2);
   EXPECT_EQ(test->stringify(), "-4.5 * -10.2");
}

TEST(MultTest, MultEvaluateFromAdd) {
   Op* op1 = new Op(7);
   Op* op2 = new Op(3);
   Add* add1 = new Add(op1, op2);
   Op* op3 = new Op(16);
   Mult* test = new Mult(add1, op3);
   EXPECT_EQ(test->evaluate(), 160);
}

TEST(MultTest, MultStringifyThroughAdd) {
   Op* op1 = new Op(7);
   Op* op2 = new Op(3);
   Add* add1 = new Add(op1, op2);
   Op* op3 = new Op(16);
   Mult* test = new Mult(add1, op3);
   std::string result = "7 + 3 * 16";
   EXPECT_EQ(test->stringify(), result);
}

TEST(MultTest, MultEvaluateZeros) {
   Op* zero = new Op(0);
   Mult* test = new Mult(zero, zero);
   EXPECT_EQ(test->evaluate(), 0);
}

TEST(MultTest, MultStringifyZeros) {
   Op* zero = new Op(0);
   Mult* test = new Mult(zero, zero);
   EXPECT_EQ(test->stringify(), "0 * 0");
}

#endif //__MULT_TEST_HPP__
