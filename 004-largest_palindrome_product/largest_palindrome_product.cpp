#include "largest_palindrome_product.hpp"
#include <string>

bool IsPalindrome(int n) {
  // returns if a number is palindromic
  std::string num_str = std::to_string(n);
  int const l = num_str.length();
  
  for (int i = 0; i < l; i++) {

    if (num_str[i] != num_str[l - 1 - i]) {
      return false;
    }

  }

  return true;
}

int LargestPalindromeProduct(int x, int y) {
  // returns the largest palindrome which is a product of two numbers
  // n, m such that x <= n,m < y
  return 1;
}
