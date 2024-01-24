#include "largest_prime_factor.hpp"

int largest_prime_factor(long long int n) {

  int i = 2;

  while (i < n) {
    if (n % i == 0) n = n/i;
    else i++;
  }

  return i;
}
