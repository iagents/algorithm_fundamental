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

  void rearrange_array_max_min(int array[], int n)
  {
    for (int i=0; i < n; i++)
    {
      int temp = array[i];

      while (temp > 0)
      {
	// find the index
	// odd and even 
	int j = (i < n/2) ? 2*i+1 : 2*(n-1-i);

	if (i == j)
	{
	  array[i] = -temp;
	  break;
	}

	int s = temp;
	temp = array[j];
	array[j] = s;

	array[j] = -array[j];

	i = j;
      }
    }

    for (int i=0; i < n; i++)
    {
      array[i] = -array[i];
    }
  }
}
