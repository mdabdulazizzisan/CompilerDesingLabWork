#ifndef IDENTIFIER_CHECK_H
#define IDENTIFIER_CHECK_H

#include "keyword-check.c"
#include <string.h>

/*
 * For the functional purpose of this function,
 * return 0 if the string is not a valid identifier and starts with invalid character
 */
int isIdentifier(const char *str) {
    // Check if the first character is a valid starting character for an identifier
    if (!(str[0] == '_' || (str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z'))) {
        return 0; // Not a valid identifier //starts with invalid character
    }else if (isKeyword(str)){
        return 0; // Not a valid identifier //is a keyword
    }

    // Check the rest of the characters
    for (int i = 1; str[i] != '\0'; i++) {
        if (!(str[i] == '_' || (str[i] >= 'a' && str[i] <= 'z') ||
              (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))) {
            return 0; // Not a valid identifier //contains invalid character
        }
    }

    return 1; // Valid identifier
}

#endif // IDENTIFIER_CHECK_H
