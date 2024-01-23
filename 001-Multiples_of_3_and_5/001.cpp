#include "001.hpp"

int sum_multiples(int n) {
  int total = 0;
  for (int i = 0; i < n; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      total += i;
    }
  }
  return total;
}


