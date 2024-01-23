#include "002.hpp"

int fib_sum(int n) {
  int x = 0;
  int y = 1;
  
  int total = 0;

  while (x + y < n) {
    int z = x;
    x = y;
    y = y + z;
    if (y % 2 == 0) {
      total += y;
    }
  }
  return total;
}
