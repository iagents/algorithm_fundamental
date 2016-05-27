#include <iostream>

#include "string_manipulation_algorithms.h"

int main()
{
	char s[] = "i like this program very much";
  	char *temp = s;
  	std::cout << "input: " << s << std::endl;
  	
  	algorithm_fundamental::string_manipulation_algorithm::reverse_words_sentence(s);

  	std::cout << "output: " << s << std::endl;
  	return 0;	
}