#include <stdio.h>
#include "randomstring.h"

int main(int argc, char** argv)
{
    int length = 32;
    if (argv[1] != NULL) {
        length = atoi(argv[1]);
    }
    
    char* str = (char*) malloc(length * sizeof(char) + 1);
    generateRandomAlphanumericString(str, length);
    printf("%s\n", str);
    free(str);
    
    return 0;
}