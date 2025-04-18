#include <stdio.h>
#include "number-check.c"

int main(void) {
    char input[20];
    printf("Enter a number: ");
    scanf("%s", input);
    if (isNumber(input)) {
        printf("%s is a number.\n", input);
    } else {
        printf("%s is not a number.\n", input);
    }
    return 0;
}