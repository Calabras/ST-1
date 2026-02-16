// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

// checkPrime tests
TEST(CheckPrime, ZeroIsNotPrime) {
  EXPECT_FALSE(checkPrime(0));
}

TEST(CheckPrime, OneIsNotPrime) {
  EXPECT_FALSE(checkPrime(1));
}

TEST(CheckPrime, TwoIsPrime) {
  EXPECT_TRUE(checkPrime(2));
}

TEST(CheckPrime, ThreeIsPrime) {
  EXPECT_TRUE(checkPrime(3));
}

TEST(CheckPrime, EvenComposite) {
  EXPECT_FALSE(checkPrime(4));
  EXPECT_FALSE(checkPrime(100));
  EXPECT_FALSE(checkPrime(1000000));
}

TEST(CheckPrime, OddComposite) {
  EXPECT_FALSE(checkPrime(9));
  EXPECT_FALSE(checkPrime(15));
  EXPECT_FALSE(checkPrime(49));
}

TEST(CheckPrime, LargePrime) {
  EXPECT_TRUE(checkPrime(7919));
  EXPECT_TRUE(checkPrime(104729));
}

// nPrime tests
TEST(NPrime, FirstPrime) {
  EXPECT_EQ(nPrime(1), 2ULL);
}

TEST(NPrime, SecondAndThird) {
  EXPECT_EQ(nPrime(2), 3ULL);
  EXPECT_EQ(nPrime(3), 5ULL);
}

TEST(NPrime, TenthPrime) {
  EXPECT_EQ(nPrime(10), 29ULL);
}

TEST(NPrime, HundredthPrime) {
  EXPECT_EQ(nPrime(100), 541ULL);
}

// nextPrime tests
TEST(NextPrime, AfterFour) {
  EXPECT_EQ(nextPrime(4), 5ULL);
}

TEST(NextPrime, AfterPrime) {
  EXPECT_EQ(nextPrime(11), 13ULL);
  EXPECT_EQ(nextPrime(2), 3ULL);
}

TEST(NextPrime, AfterOne) {
  EXPECT_EQ(nextPrime(1), 2ULL);
}

TEST(NextPrime, AfterZero) {
  EXPECT_EQ(nextPrime(0), 2ULL);
}

TEST(NextPrime, AfterLargeComposite) {
  EXPECT_EQ(nextPrime(100), 101ULL);
}

// sumPrime tests
TEST(SumPrime, BoundTwo) {
  EXPECT_EQ(sumPrime(2), 0ULL);
}

TEST(SumPrime, BoundTen) {
  EXPECT_EQ(sumPrime(10), 17ULL);
}

TEST(SumPrime, BoundThree) {
  EXPECT_EQ(sumPrime(3), 2ULL);
}

TEST(SumPrime, BoundZero) {
  EXPECT_EQ(sumPrime(0), 0ULL);
}

TEST(SumPrime, LargeBound) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922ULL;
  EXPECT_EQ(expected, res);
}
