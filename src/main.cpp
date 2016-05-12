#include <iostream>

#include "search.h"

int main()
{
  int array[] = { 1, 3, 5, 6, 11, 82, 88, 90 };
  int key = 6;

  std::cout << "key: " << key << std::endl;
  int index = algorithm_fundamental::binarysearch(array, key);
  std::cout << "found the key at " << index  << ", value=" << array[index] << std::endl;

  return 0;
}
