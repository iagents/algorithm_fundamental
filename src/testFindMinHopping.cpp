#include <algorithm>
#include <iostream>
#include <climits>
#include <vector>

#include "fundamental_algorithms.h"

void print_element(const int ee){ std::cout << ee << " "; }

int main()
{
  int arr[] = { 1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9 };
  int n = sizeof(arr)/sizeof(arr[0]);
  std::vector<int> array(n, 0);
  copy( arr, arr+n, array.begin() );
  std::cout << "size of the input array=" << n << std::endl;
  std::cout << "input array: " << std::endl;
  for_each( array.begin(), array.end(), print_element );
  std::cout << std::endl;

  std::cout <<"minimum number of hoppings to reach to the end of array=" 
	    << algorithm_fundamental::find_min_hopping(arr, 0, n-1) << std::endl;

  return 0;
}
  
