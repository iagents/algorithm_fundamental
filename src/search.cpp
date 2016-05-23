#include <iostream>

#include "search.h"

namespace algorithm_fundamental
{
  int binary_search(int array[], int key)
  {
    int low = 0;
    // Yes, this doesn't give you what you're looking for
    //int high = sizeof(array)/sizeof(array[0]);
    int high = sizeof(array);

    while (low <= high) 
    {
      int mid = low + ((high-low)/2);

      if (array[mid] > key) 
      {
        high = mid - 1;
      } else if (array[mid] < key)
      {
	low = mid + 1;
      } else
      {
	return mid;
      }
    }

    return -(low+1);
  }
}
