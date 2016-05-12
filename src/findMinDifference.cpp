#include <iostream>
#include "fundamental_algorithms.h"

int main()
{
  int arr[] = { 1, 5, 3, 19, 18, 25 };
  int n = sizeof(arr)/sizeof(arr[0]);
  int min_diff = algorithm_fundamental::find_min_difference(arr, n);

  std::cout << "n=" << n << ", Minimum difference=" << min_diff << std::endl;

  return 0;
}
