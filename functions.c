/*************************
 *Alaina Carson
 *
 *CPSC 2311 Section 005
 *abcarso@clemson.edu
 *************************/

#include "functions.h"


#define MAX_SIZE 200

void numSentences(FILE* in, FILE* out)
{
    int count = 0;
    char fileData[MAX_SIZE] = {};
    char first;
    char second;

    fseek(in,0,SEEK_SET);
    fread(fileData,sizeof(char),MAX_SIZE,in);
    for (int i=0; i<(sizeof(fileData)/sizeof(char)-1)-1; i++)
    {
        first = fileData[i];
        second = fileData[i+1];
        if (sentenceEnd(first, second) == true)
        {
            count++;
        }
    }
    fprintf(out, "Total number of sentences: %d", count);
}

void numWords(FILE* in, FILE* out)
{
    int count = 0;
    char fileData[MAX_SIZE] = {};
    char first;
    char second;

    fseek(in,0,SEEK_SET);
    fread(fileData,sizeof(char),MAX_SIZE,in);
    for (int i=0; i<(sizeof(fileData)/sizeof(char)-1)-1; i++)
    {
        first = fileData[i];
        second = fileData[i+1];
        if (wordEnd(first, second) == true)
        {
            count++;
        }
    }
    fprintf(out, "Total number of sentences: %d", count);

}

bool sentenceEnd(char first, char second)
{
    bool isChar = false;
    bool isPunctuation = false;

    switch(first)
    {
        case 'a':
            isChar = true;
            break;
        case 'b':
            isChar = true;
            break;
        case 'c':
            isChar = true;
            break;
        case 'd':
            isChar = true;
            break;
        case 'e':
            isChar = true;
            break;
        case 'f':
            isChar = true;
            break;
        case 'g':
            isChar = true;
            break;
        case 'h':
            isChar = true;
            break;
        case 'i':
            isChar = true;
            break;
        case 'j':
            isChar = true;
            break;
        case 'k':
            isChar = true;
            break;
        case 'l':
            isChar = true;
            break;
        case 'm':
            isChar = true;
            break;
        case 'n':
            isChar = true;
            break;
        case 'o':
            isChar = true;
            break;
        case 'p':
            isChar = true;
            break;
        case 'q':
            isChar = true;
            break;
        case 'r':
            isChar = true;
            break;
        case 's':
            isChar = true;
            break;
        case 't':
            isChar = true;
            break;
        case 'u':
            isChar = true;
            break;
        case 'v':
            isChar = true;
            break;
        case 'w':
            isChar = true;
            break;
        case 'x':
            isChar = true;
            break;
        case 'y':
            isChar = true;
            break;
        case 'z':
            isChar = true;
            break;
    }

    switch(second)
    {
        case '.':
            isPunctuation = true;
            break;
        case '!':
            isPunctuation = true;
            break;
        case '?':
            isPunctuation = true;
            break;
    }

    if ((isChar)&&(isPunctuation)) {
        return true;
    }
    else {
        return false;
    }
}

bool wordEnd(char first, char second)
{
    bool isChar = false;
    bool isEnd = false;

    switch(first)
    {
        case 'a':
            isChar = true;
            break;
        case 'b':
            isChar = true;
            break;
        case 'c':
            isChar = true;
            break;
        case 'd':
            isChar = true;
            break;
        case 'e':
            isChar = true;
            break;
        case 'f':
            isChar = true;
            break;
        case 'g':
            isChar = true;
            break;
        case 'h':
            isChar = true;
            break;
        case 'i':
            isChar = true;
            break;
        case 'j':
            isChar = true;
            break;
        case 'k':
            isChar = true;
            break;
        case 'l':
            isChar = true;
            break;
        case 'm':
            isChar = true;
            break;
        case 'n':
            isChar = true;
            break;
        case 'o':
            isChar = true;
            break;
        case 'p':
            isChar = true;
            break;
        case 'q':
            isChar = true;
            break;
        case 'r':
            isChar = true;
            break;
        case 's':
            isChar = true;
            break;
        case 't':
            isChar = true;
            break;
        case 'u':
            isChar = true;
            break;
        case 'v':
            isChar = true;
            break;
        case 'w':
            isChar = true;
            break;
        case 'x':
            isChar = true;
            break;
        case 'y':
            isChar = true;
            break;
        case 'z':
            isChar = true;
            break;
    }

    switch(second)
    {
        case ' ':
            isEnd = true;
            break;
        case '.':
            isEnd = true;
            break;
        case '!':
            isEnd = true;
            break;
        case '?':
            isEnd = true;
            break;
    }

    if ((isChar)&&(isEnd)) {
        return true;
    }
    else {
        return false;
    }
}
