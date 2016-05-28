#ifndef _SORTING_ALGORITHMS_H__
#define _SORTING_ALGORITHMS_H__

#include <iostream>
#include <algorithm>
#include <vector>

namespace algorithm_fundamental {
namespace sorting_algorithms {
  /// \todo{Need to make these as templates}		

  /// \brief An implementation of bucket sort
  /// \param[in] array Input array of floating point numbers
  /// \param[in] n Size of the input array
  void bucket_sort(float array[], int n);

  /// \brief An implementation of quick sort
  /// \param[in] array Input array of integers
  /// \param[in] left left index
  /// \param[in] right right index
  void quick_sort(int array[], int left, int right);

  /// \brief Merge sort.
  /// \param[in] array Input array of integers
  /// \param[in] left left index
  /// \param[in] right right index
  void merge_sort(int array[], int left, int right);

  /// \brief Merge two subarray into array
  /// The first subarray is array[left...mid]
  /// The second subarray is array[mid+1...right]
  /// \param[in] array Input array of integers.
  /// \param[in] left Left index
  /// \param[in] mid Mid index
  /// \param[in] right right index
  void merge(int array[], int left, int mid, int right);

} // namespace sorting_algorithms
} // namespace algorithm_fundamental

#endif
