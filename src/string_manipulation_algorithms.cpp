#include "string_manipulation_algorithms.h"

namespace algorithm_fundamental {
namespace string_manipulation_algorithm {

void reverse_words_sentence(char *s)
{
	char * word_begin = s;
	char * temp = s;

	// Given an input sentence, like "i like this program very much," 
	// the following while paragraph will produce, "hcum yrev...ekil i"
	while (*temp) 
	{
		temp++;

		// if the pointer points either '\0' or ' ', need to reverse whatever you've been reading.
		if (*temp == '\0' || *temp == ' ')
		{
			reverse_words(word_begin, temp-1);
			word_begin = temp+1;
		}
	}

	reverse_words(s, temp-1);
}	

void reverse_words(char * begin, char * end)
{
	char temp;

	while (begin < end)
	{
		temp = *begin;
		*begin++ = *end;
		*end-- = temp;
	}
}

}	
}