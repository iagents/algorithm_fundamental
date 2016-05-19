#include <iostream>

#include "fundamental_algorithms.h"

//using algorithm_fundamental;

int main()
{
  //int arr[] = { 1, 2, 3, 4, 5 };
  int arr[]  = { 3, 7, 90, 20, 10, 50, 40 };
  int r = 3;
  int n = sizeof(arr)/sizeof(arr[0]);

  std::cout << "nCr (n=" << n << ", r=" << r << "): "
	    << (algorithm_fundamental::factorial(n))/(algorithm_fundamental::factorial(n-r)*algorithm_fundamental::factorial(r)) << std::endl;

  algorithm_fundamental::calcCombination( arr, n, r );

  return 0;
}
