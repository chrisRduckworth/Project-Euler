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

int SmallestMultiple(int n) {
  // returns the smallest number which is a multiple of
  // all numbers in [1, n)

  std::unordered_map<int, int> primes = {};

  // the lcm of numbers is the max of all the
  // exponents of the prime factors of those 
  // numbers

  for (int i = 2; i < n; i++) {

    std::unordered_map<int, int> prime_decomp = PrimeDecomposition(i);

    for (const auto& [prime, count] : prime_decomp) {

      if ((primes.contains(prime) && count > primes[prime])
        || 
        !primes.contains(prime)) 
      {
        primes[prime] = count;
      }

    }

  }

  int total = 1;

  for (const auto &[prime, count] : primes) {
    total *= std::pow(prime, count);
  }
  
  return total;
}
