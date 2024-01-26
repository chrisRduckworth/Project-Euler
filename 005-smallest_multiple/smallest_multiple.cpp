#include "smallest_multiple.hpp"
#include <unordered_map>
#include <cmath>

std::unordered_map<int, int> PrimeDecomposition(int n) {
  // returns the prime decomposition of a number

  std::unordered_map<int, int> prime_decomp = {};

  int j = 2;

  while (j <= n) {

    if (n % j == 0) {
      // j is a factor of n

      if (prime_decomp.contains(j)) prime_decomp[j] ++;

      else prime_decomp[j] = 1;

      n /= j;

    } else {
      //j is not a factor so try the next number

      j++;

    }

  }

  return prime_decomp;
}

