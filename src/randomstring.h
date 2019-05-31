#ifndef __randomstring_h__
#define __randomstring_h__

#include <stdlib.h>

/**
 * Generate a random alphanumeric string with a given length
 */
void generateRandomAlphanumericString(char *destination, size_t len);

/**
 * Generate a random string with a given length
 */
void generateRandomString(char *destination, size_t len);

#endif