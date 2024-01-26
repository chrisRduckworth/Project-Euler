#include <gtest/gtest.h>
#include "../smallest_multiple.hpp"
#include <unordered_map>

TEST(PrimeDecompositionTest, ReturnsComposition) {
  std::unordered_map<int, int> expected = {
    {2, 2},
    {3, 3},
    {5, 1},
    {7, 1}
  };
  std::unordered_map<int, int> decomp = PrimeDecomposition(3780);
  EXPECT_EQ(decomp, expected);
}

TEST(SmallestMultipleTest, ReturnsSmallestMultiple) {
  ASSERT_EQ(SmallestMultiple(3), 2);
  ASSERT_EQ(SmallestMultiple(6), 60);
  ASSERT_EQ(SmallestMultiple(11), 2520);
}
