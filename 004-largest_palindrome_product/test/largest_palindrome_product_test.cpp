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

TEST(LargestPalindromeProductTest, Returns0IfNoPalindromes) {
  ASSERT_EQ(LargestPalindromeProduct(13,15), 0);
}

TEST(LargestPalindromeProductTest, ReturnsLargesPalindromeWhenOnePalindrome) {
  ASSERT_EQ(LargestPalindromeProduct(10, 15), 121);
}

TEST(LargestPalindromeProductTest, ReturnsLargesPalindromeWhenMultiplePalindromes) {
  ASSERT_EQ(LargestPalindromeProduct(1, 8), 9);
}
