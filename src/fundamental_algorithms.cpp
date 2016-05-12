#include <algorithm>
#include <climits>
#include <iostream>

#include "fundamental_algorithms.h"

namespace algorithm_fundamental
{
  int find_min_difference(int array[], int n)
  {
    std::sort(array, array+n);

    int diff = INT_MAX;

    for (int i=0; i < n-1; i++) 
    {
      if (array[i+1] - array[i] < diff)		
      {
	diff = array[i+1]-array[i];
      }
    }

    return diff;
  }
}
