#include <iostream>
#include <vector>

#include "fundamental_algorithms.h"

int main()
{
  std::vector<std::string> arr_vec;

  arr_vec.push_back("54");
  arr_vec.push_back("546");
  arr_vec.push_back("548");
  arr_vec.push_back("60");

  algorithm_fundamental::find_biggest_number_order(arr_vec);
  std::cout << std::endl;

  return 0;
}
