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

  int largest_palindrome = 0;

  // this is O((y-x)^2) which isn't very efficient
  // but since in the question y - x = 900 it doesnt
  // really matter

  for (int i = x; i < y; i++) {

    for (int j = i; j < y; j++) {

      int product = i * j;

      if (IsPalindrome(product) && 
          product > largest_palindrome) {

        largest_palindrome = product;

      }
    }
  }

  return largest_palindrome;
}
