#include <iostream>
#include "fundamental_algorithms.h"

int main(void)
{
  int array1[] = { 1, 5, 9, 10, 15, 20 };
  int array2[] = { 2, 3, 8, 13 };
  int m = sizeof(array1) / sizeof(array1[0]);
  int n = sizeof(array2) / sizeof(array2[0]);
  algorithm_fundamental::merge(array1, array2, m, n);
  
  std::cout << "After merging\n First Array: ";
  for (int i=0; i < m; i++)
    std::cout << array1[i] << " ";

  std::cout << "\nSecond Array: " ;
  for (int i=0; i < n; i++)
    std::cout << array2[i] << " ";
  std::cout << std::endl;

  return 0;
}
