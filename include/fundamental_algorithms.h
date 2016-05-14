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
} // algorithm_fundamental
