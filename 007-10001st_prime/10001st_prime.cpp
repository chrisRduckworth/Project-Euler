#include "10001st_prime.hpp"
#include <cmath>

bool IsPrime(int n) {
  //returns if a function is prime

  for (int i = 2; i <= std::sqrt(n); i++) {
    if (n % i == 0) return false;
  }

  return true;
}

