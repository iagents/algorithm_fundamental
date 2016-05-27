#ifndef _STRING_MANIPULATION_ALGORITHMS_H__
#define _STRING_MANIPULATION_ALGORITHMS_H__

#include <string>

namespace algorithm_fundamental {
namespace string_manipulation_algorithm {

/// \brief Reverse the order of words in a given sentence.
/// \param[in] s Pointer to the char array.
void reverse_words_sentence(char *s);

/// \brief Reverse the order of characters in a given word.
/// \param[in] begin Pointer to the beginning of the input word.
/// \param[in] end Pointer to the end of the input word.
void reverse_words(char * begin, char * end);

}	
}

#endif