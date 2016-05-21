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

  int fibonacci_series(int n)
  {
    if (n <= 1)
    {
      return 1;
    }

    return (fibonacci_series(n-1) + fibonacci_series(n-2));
  }

  int find_increasing_subarrays(int array[], int n)
  {
    int cnt = 0;

    for (int i=0; i < n; ++i)
    {
      for (int j=i+1; j < n; ++j)
      {
	// If a subarray, array[i..j] is not strictly increasing, then
	// subarrays after that array, i.e., array[i..j+1],
	// array[i..j+2]... can't be strictly increasing.
	if(array[j] > array[j-1])
	{
	  cnt++;
	} else
	{
	  break;
	}
      }
    }
    return cnt;
  }

  void merge(int array1[], int array2[], int m, int n)
  {
    for (int i=n-1; i >= 0; i--)
    {
      int j, last = array1[m-1];
      for (j=m-1; j >= 0 && array1[j] > array2[i]; j--)
      {
	array1[j+1] = array1[j];
      }

      if (j != m-1)
      {
	array1[j+1] = array2[i];
	array2[i] = last;
      }
    }
  }

  int factorial(int n)
  {
    if (n <=1) return 1;

    return n*factorial(n-1);
  }

  void calcCombination(int array[], int n, int r)
  {
    int data[r];
    combination(array, data, 0, n-1, 0, r);
  }

  void combination(int array[], int data[], int start, int end, int index, int r)
  {
    if (index == r)
    {
      for (int jj=0; jj < r; jj++)
      {
	std::cout << data[jj] << " ";
      }
      std::cout << std::endl;

      return;
    }

    for( int ii=start; ii <= end && end-ii+1 >= r-index; ii++ )
    {
      data[index] = array[ii];
      combination( array, data, ii+1, end, index+1, r );
    }
  }

  void find_min_sum_subarray(int array[], int n, int k)
  {
    // n must be greater than k
    if ( n < k )
    {
      return;
    }

    // Initialize the beginning index of the resulting subarray
    int res_index = 0;

    // Compute the sum of subarray
    int sum = 0;
    for (int i=0; i < k; i++)
    {
      sum += array[i];
    }

    int min_sum = sum;

    // Iterate from (k+1)th element to nth element
    for (int i=k; i < n; i++)
    {
      // Add current item, (k+1), and remove the first item from the
      // previous subarray
      sum += array[i]-array[i-k];

      if(sum < min_sum)
      {
	min_sum = sum;
	res_index = (i-k+1);
      }
    }

    std::cout << "Subarray between [" << res_index 
	      << ", " << res_index+k-1 << "] has minimum sum!" << std::endl;
  }

  void generate_anagram(std::string & str, int index)
  {
    if( index == str.length() )
    {
      std::cout << str << std::endl;
    }

    for (int i=index; i < str.length(); i++)
    {
      swap( str[index], str[i] );
      generate_anagram( str, index+1 );
      swap( str[index], str[i] );
    }
  }

  void swap(char & a, char & b)
  {
    char tmp = a;
    a = b;
    b = tmp;
  }
}
