#include "search.h"

namespace algorithm_fundamental
{
  int binarysearch(int array[], int key)
  {
    int low = 0;
    int high = sizeof(array)/sizeof(array[0]);

    while (low <= high) 
    {
      int mid = low + ((low+high)/2);

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
