#include <iostream>
#include "fundamental_algorithms.h"

int main()
{
  int arr[] = { 3, 7, 90, 20, 10, 50, 40 };
  int k = 3;
  int n = sizeof(arr) / sizeof(arr[0]);
  algorithm_fundamental::find_min_sum_subarray(arr, n, k);
  
  return 0;
}
