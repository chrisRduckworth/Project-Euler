#include <gtest/gtest.h>
#include "../smallest_multiple.hpp"

TEST(SmallestMultipleTest, ReturnsSmallestMultiple) {
  ASSERT_EQ(SmallestMultiple(3), 2);
  ASSERT_EQ(SmallestMultiple(6), 60);
  ASSERT_EQ(SmallestMultiple(11), 2520);
  
}
