#include "randomstring.h"
#include <time.h>
#include <stdlib.h>
#include <string.h>

const char ALPHANUMERIC_CHARS[62] = {
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 
    'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 
    'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 
    'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 
    'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 
    'y', 'z'
};

void generateRandomAlphanumericString(char *destination, size_t len)
{
    srand(time(NULL));
    for (unsigned int i = 0; i < len; i++) {
        int index = ((float) rand() / RAND_MAX) * 62;        
        int comp = strlen(destination);
        destination[comp] = ALPHANUMERIC_CHARS[index];
        destination[comp + 1] = '\0';
    }
}

void generateRandomString(char *destination, size_t len)
{
    char start = 0x21;
    char end = 0x7E;
    srand(time(NULL));
    for (unsigned int i = 0; i < len; i++) {
        char index = (char) start + (((float) rand() / RAND_MAX) * end);        
        int comp = strlen(destination);
        destination[comp] = index;
        destination[comp + 1] = '\0';
    }
}