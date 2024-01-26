#include "largest_product_in_a_series.hpp"
#include <string>

long int LargestProduct(std::string n, int m) {
  // returns the largest product of 
  // m adjacent digits;
  
  long int largest_product = 1;

  for (int i = 0; i <= n.length() - m; i++) {

    long int product = 1;

    for (int j = 0; j < m; j++) {
      product *= n[i + j] - '0';
    }

    if (product > largest_product) {
      largest_product = product;
    }

  }
  
  return largest_product;
}
