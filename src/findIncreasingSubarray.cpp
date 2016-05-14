#include <iostream>
#include "fundamental_algorithms.h"

int main()
{
  //int arr[] = { 1, 2, 2, 4 }; // {1, 2}, {2, 4}
  int arr[] = {1, 2, 3, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  std::cout << "The number of strictly increasing subarrays=" << algorithm_fundamental::find_increasing_subarrays(arr, n) << std::endl;

  return 0;
}

