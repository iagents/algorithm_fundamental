#include "sorting_algorithms.h"

namespace algorithm_fundamental {
namespace sorting_algorithms {

  // \todo{Need to modify this to make a template
  void bucket_sort(float array[], int n)
  {
    std::vector<float> bucket[n];

    for (int i=0; i < n; i++)
    {
      // bucket index
      int bi = n * array[i];
      bucket[bi].push_back(array[i]);
    }

    // sort individual buckets, 
    // hmm, doesn't this increase the complexity by order of nlogn?
    for (int i=0; i < n; i++)
    {
      sort( bucket[i].begin(), bucket[i].end() );
    }

    // concatenate individual buckets into one
    int index=0;
    for (int i=0; i < n; i++)
    {
      for (int j=0; j < bucket[i].size(); j++)
      {
	array[index++] = bucket[i][j];
      }
    }
  }    

  void quick_sort(int array[], int left, int right)
  {
    int i=left, j=right;
    int tmp;
    int pivot = array[(left+right)/2];

    while (i <= j)
    {
      while (array[i] < pivot)
      {
        i++;
      }

      while (array[j] > pivot) 
      {
        j--;
      }

      if ( i <= j )
      {
        tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
        i++;
        j--;
      }
    }

    if (left < j)
    {
      quick_sort(array, left, j);
    }

    if (right > i)
    {
      quick_sort(array, i, right);
    }
  }

  void merge_sort(int array[], int left, int right)
  {
    if (left < right)
    {
      // find the mid index
      int mid = left + ((right-left)/2);

      // do merge sort to the left, subarray
      merge_sort(array, left, mid);
      // do merge sort to the right, subarray
      merge_sort(array, mid+1, right);
      // then merge the results from sorting two subarrays
      merge(array, left, mid, right);
    }
  }

  void merge(int array[], int left, int mid, int right)
  {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int array1[n1], array2[n2];

    // copy the original array into two subarrays
    for (int i=0; i < n1; i++)
    {
      array1[i] = array[left+i];
    }

    for (int i=0; i < n2; i++)
    {
      array2[i] = array[mid+1+i];
    }

    // Merge two subarrays into the original array
    int i=0; // index for the first subarray
    int j=0; // index for the second subarray
    int k=left; // index of the original array

    while (i < n1 && j < n2)
    {
      if (array1[i] <= array2[j])
      {
        array[k] = array1[i];
        i++;
      } else
      {
        array[k] = array2[j];
        j++;
      }
      k++;
    }

    // copy the remaining elements of array1, if any
    while (i < n1)
    {
      array[k] = array1[i];
      i++;
      k++;
    }

    // copy the remaining elements of array2, if any
    while (j < n2)
    {
      array[k] = array2[j];
      j++;
      k++;
    }
  }

} // namespace sorting_algorithms
} // namespace algorithm_fundamental
