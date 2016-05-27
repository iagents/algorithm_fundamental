#ifndef _SORT_H__
#define _SORT_H__

#include <iostream>
#include <algorithm>
#include <vector>

namespace  algorithm_fundamental
{
  /// \brief An implementation of bucket sort
  /// \param[in] array Input array of floating point numbers
  /// \param[in] n Size of the input array
  void bucket_sort(float array[], int n);

  /// \brief An implementation of quick sort
  /// \param[in] array Input array of integers
  /// \param[in] left left index
  /// \param[in] right right index
  void quick_sort(int array[], int left, int right);
} // namespace algorithm_fundamental

#endif
