#include <iostream>
#include <string>

#include <fundamental_algorithms.h>

int main()
{
  std::string str;
  std::cout << "Enter a string to generate its anagram (type quit to stop): ";
  
  while ( std::cin >> str && str != "quit" )
  {
    algorithm_fundamental::generate_anagram( str,0 );
    std::cout << "[info] Finished to generate " << algorithm_fundamental::factorial(str.length()) << " number of anagrams" << std::endl << std::endl;
    std::cout << "Enter a string to generate its anagram (type quit to stop): ";
  }

  std::cout << "Done!" << std::endl;

  return 0;
}
