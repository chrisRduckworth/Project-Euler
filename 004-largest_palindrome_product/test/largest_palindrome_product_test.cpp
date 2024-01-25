#include <gtest/gtest.h>
#include "../largest_palindrome_product.hpp"

TEST(IsPalindromeTest, ReturnsFalseForNotPalindrome) {
  ASSERT_EQ(IsPalindrome(10), false);
  ASSERT_EQ(IsPalindrome(102), false);
  ASSERT_EQ(IsPalindrome(134564), false);
}

TEST(IsPalindromeTest, ReturnsTrueForPalindrome) {
  ASSERT_EQ(IsPalindrome(1), true);
  ASSERT_EQ(IsPalindrome(11), true);
  ASSERT_EQ(IsPalindrome(23432), true);
  ASSERT_EQ(IsPalindrome(376434673), true);
}
