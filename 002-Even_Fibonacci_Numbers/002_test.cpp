#include <gtest/gtest.h>
#include "002.hpp"

TEST(FibSum, BaseCase) {
  EXPECT_EQ(fib_sum(1), 0);
}

TEST(FibSum, LowNumbers) {
  EXPECT_EQ(fib_sum(3), 2);
  EXPECT_EQ(fib_sum(5), 2);
  EXPECT_EQ(fib_sum(9), 10);
}
