#ifndef NUMBER_CHECK_H
#define NUMBER_CHECK_H

#include <string.h>

int isNumber(const char *str) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] < '0' || str[i] > '9') {
            return 0; // Not a number
        }
    }
    return 1; // Is a number
}

#endif // NUMBER_CHECK_H
