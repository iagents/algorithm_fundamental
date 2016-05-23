#include <algorithm>
#include <iostream>
#include <vector>

#include "sort.h"

void print_element(float element){ std::cout << element << " "; }

int main()
{
  float arr[] = { 0.897, 0.565, 0.656, 0.123, 0.665, 0.324 };
  int n = sizeof(arr)/sizeof(arr[0]);
  std::vector<float> vec(n, 0.0);
  copy( arr, arr+n, vec.begin() );
  
  std::cout << "Input array: " << std::endl;
  for_each( vec.begin(), vec.end(), print_element );
  algorithm_fundamental::bucket_sort(arr, n);
  //vec.clear();
  //copy( arr, arr+n, vec.begin() );
  std::cout << std::endl << "Sorted array: " << std::endl;
  //for_each( vec.begin(), vec.end(), print_element );

  for (int i=0; i < n; i++)
    std::cout << arr[i] << " ";
  std::cout << std::endl;

  return 0;
}
