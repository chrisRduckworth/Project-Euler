#include <gtest/gtest.h>
#include "../10001st_prime.hpp"

TEST(IsPrimeTest, ReturnsFalseIfNotPrime) {
  ASSERT_FALSE(IsPrime(4));
  ASSERT_FALSE(IsPrime(6));
  ASSERT_FALSE(IsPrime(9));
  ASSERT_FALSE(IsPrime(33));
}

TEST(IsPrimeTest, ReturnsTrueIfPrime) {
  ASSERT_TRUE(IsPrime(2));
  ASSERT_TRUE(IsPrime(3));
  ASSERT_TRUE(IsPrime(11));
  ASSERT_TRUE(IsPrime(53));
}

TEST(NthPrimeTest, ReturnsNthPrime) {
  EXPECT_EQ(NthPrime(1), 2);
  EXPECT_EQ(NthPrime(2), 3);
  EXPECT_EQ(NthPrime(3), 5);
  EXPECT_EQ(NthPrime(4), 7);
  EXPECT_EQ(NthPrime(5), 11);
  EXPECT_EQ(NthPrime(6), 13);
  EXPECT_EQ(NthPrime(10), 29);
}
