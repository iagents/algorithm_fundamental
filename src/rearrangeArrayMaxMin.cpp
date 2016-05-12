#include <iostream>
#include "fundamental_algorithms.h"

int main()
{
  int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  int n = sizeof(arr)/sizeof(arr[0]);

  std::cout << "Original array: " << std::endl;
  for (int i=0; i < n; i++)
  {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  algorithm_fundamental::rearrange_array_max_min(arr, n);

  std::cout << "Modified array: " << std::endl;
  for (int i=0; i < n; i++)
  {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
    
