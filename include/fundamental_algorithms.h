#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

namespace algorithm_fundamental
{
  /// \brief Given an array, find the minimum difference between elements.
  /// e.g.) { 1, 5, 3, 19, 18, 25 }, answer = 1 = (19-18)
  /// \param[in] array an array of integers
  /// \param[in] n size of the input array
  /// \return Return the minimum difference among the elements.
  int find_min_difference(int array[], int n);

  /// \brief Rearrange the input array in the format of max and min.
  /// e.g.)   { 1, 2, 3, 4, 5, 6, 7, 8, 9 }
  /// output, { 9, 1, 8, 2, 7, 3, 6, 4, 5 }
  /// \param[in] array an array of integers
  /// \param[in] n size of the input array
  void rearrange_array_max_min(int array[], int n);

  /// \brief Return the fibonacci series of the given number
  /// \param[in] n input integer
  /// \return Return the fibonacci series of the given number
  int fibonacci_series(int n);

  /// \brief Count the number of all increasing subarrays from an input array
  /// e.g.) { 1, 2, 3, 4 }
  /// - {1, 2}, {1, 2, 3}, {1, 2, 3, 4}, {2, 3}, {2, 3, 4}, {3, 4}
  /// \param[in] array an array of integer
  /// \param[in] n the size of the input array
  /// \return Return the number of all increasing subarrays from an input array
  int find_increasing_subarrays(int array[], int n);

  /// \brief Merge two sorted arrays into two arrays of which sizes
  /// are the same as those of the input arrays. The size of the extra space is O(1).
  void merge(int array1[], int array2[], int m, int n);

  /// \brief Compute factorial(n)
  /// A recursive implementation of computing factorial of a given number, n.
  int factorial(int n);

  /// \brief Calculate the combination of r from n, e.g.) nCr
  void calcCombination(int array[], int n, int r);

  void combination(int array[], int data[], int start, int end, int index, int r);

  /// \brief Find the subarray of size k that its sum is the minimum
  /// of all subarrays. Here a subarray is a part of the input array that
  /// its components must be continguous.
  /// \param[in] array input array of integers
  /// \param[in] n the size of the input array
  /// \param[in] k the size of the subarray
  void find_min_sum_subarray(int array[], int n, int k);

  /// \brief Generate an anagram of the input string
  /// \param[in] str input string
  /// \param[in] index the current index of character in the input string
  void generate_anagram(std::string & str, int index);

  void swap(char & a, char & b);

  /// \brief Rearrange the order of numbers in the string format to
  /// find the biggest number
  /// \param[in] array input array of integers in the string format.
  void find_biggest_number_order(std::vector<std::string> array);

  int compare_number_in_string(std::string x, std::string y);

  void print_elements(const std::string & element);

  /// \brief Find the minimum number of jumps to reach the end of the
  /// array, starting from the first element. Each element of the given
  /// array represents the maximum number of steps that can go forward from
  /// that element. If an element has 0, it cannot move through the element.
  /// e.g.) arr[] = { 1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9 }
  /// Output: 3 (1 -> 3 -> 8 -> 9)
  /// First element has 1, so it can only go to 3. The second element
  /// is 3, so can make at most 3 steps, from 5 to 9
  int find_min_hopping(int array[], int l, int h);
} // algorithm_fundamental
