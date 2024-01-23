#include <gtest/gtest.h>
#include "001.hpp"

TEST(SumMultiples, LessThan10) {
  EXPECT_EQ(sum_multiples(4), 3);
  EXPECT_EQ(sum_multiples(6), 8);
  EXPECT_EQ(sum_multiples(10), 23);
}
