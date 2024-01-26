#include "sum_square_difference.hpp"

int SumSquareDifference(int n) {

  // sum of first n *2 = 1/6 k (k + 1) (2k + 1)
  int sum_squares = n * (n + 1) * (2 * n + 1) / 6;  

  // sum of first n numbers = 1/2 k (k + 1)
  int sum_squared = (n * n * (n + 1) * (n + 1) / 4);

  return sum_squared - sum_squares;
}
