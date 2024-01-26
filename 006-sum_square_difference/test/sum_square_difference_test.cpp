#include <gtest/gtest.h>
#include "../sum_square_difference.hpp"

TEST (SumSquareDifferenceTest, ReturnsCorrect) {
  EXPECT_EQ(SumSquareDifference(2), 4);
  EXPECT_EQ(SumSquareDifference(5), 170);
  EXPECT_EQ(SumSquareDifference(10), 2640);
}
