/*************************
 *Alaina Carson
 *
 *CPSC 2311 Section 005
 *abcarso@clemson.edu
 *************************/


#ifndef FUNCTIONS.h
#define FUNCTIONS.h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



/*counts and returns the number of sentences in a file
 *in - file pointer to the file being counted
 *out - file pointer to where the output will be stored
 */
void numSentences(FILE* in, FILE* out);

/*counts and returns the number of words in a file
 *in - file pointer to the file being counted
 *out - file pointer to where the output will be stored
 */
void numWords(FILE* in, FILE* out);

/*checks if two characters are the end of a sentence
 *first - check if this character is a letter
 *second - check if this character is punctuation
 */
bool sentenceEnd(char first, char second);

/*checks if two characters are the end of a word
 *first - check if this character is a letter
 *second - check if this character is a space or punctuation
 */
bool wordEnd(char first, char second);

#endif
