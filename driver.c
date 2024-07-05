/*************************
 *Alaina Carson
 *
 *CPSC 2311 Section 005
 *abcarso@clemson.edu
 *************************/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "functions.h"
//#include "functions.c"

int main(int argc, char* argv[])
{
    //define file pointers
    FILE *input1;
    FILE *input2;
    FILE *output1;
    FILE *output2;

    //open files
    input1 = fopen("input.txt", "r");
    input2 = fopen("input2.txt", "r");
    output1 = fopen("output.txt", "w");
    output2 = fopen("output2.txt", "w");

    //check files open correctly
    assert(input1 != NULL);
    assert(input2 != NULL);

    //call functions
    numSentences(input1, output1);
    numWords(input1, output1);

    numSentences(input2, output2);
    numWords(input2, output2);

    //close files
    fclose(input1);
    fclose(input2);
    fclose(output1);
    fclose(output2);
    return 0;
}
