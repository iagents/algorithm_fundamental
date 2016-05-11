#include <iostream>

#include "search.h"

int main()
{
  int array[] = { 1, 3, 5, 6, 11, 82, 88, 90 };
  int key = 82;

  std::cout << "find the key " << algorithm_fundamental::binarysearch(array, key) << std::endl;

  return 0;
}
