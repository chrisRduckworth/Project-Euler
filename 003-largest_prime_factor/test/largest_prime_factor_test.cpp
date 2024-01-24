#include <gtest/gtest.h>
#include "../largest_prime_factor.hpp"

TEST(LARGEST_PRIME_FACTOR, returns_prime) {
  EXPECT_EQ(largest_prime_factor(2), 2);
  EXPECT_EQ(largest_prime_factor(3), 3);
  EXPECT_EQ(largest_prime_factor(5), 5);
  EXPECT_EQ(largest_prime_factor(11), 11);
}

TEST(LARGEST_PRIME_FACTOR, returns_composite) {
  EXPECT_EQ(largest_prime_factor(4), 2);
  EXPECT_EQ(largest_prime_factor(6), 3);
  EXPECT_EQ(largest_prime_factor(9), 3);
  EXPECT_EQ(largest_prime_factor(15), 5);
  EXPECT_EQ(largest_prime_factor(32), 2);
  EXPECT_EQ(largest_prime_factor(51), 17);
}
