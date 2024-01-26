#include "10001st_prime.hpp"
#include <cmath>

bool IsPrime(int n) {
  //returns if a function is prime

  for (int i = 2; i <= std::sqrt(n); i++) {
    if (n % i == 0) return false;
  }

  return true;
}

int NthPrime(int n) {
  //returns the nth prime
  
  int prime = 0;
  int prime_count = 0;

  int i = 2;

  while (prime_count < n) {

    if (IsPrime(i)) {
      prime = i;
      prime_count ++;
    }

    i++;
  }

  return prime;
}
