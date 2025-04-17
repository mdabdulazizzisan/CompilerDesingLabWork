#include <stdio.h>
#include "keyword-check.c"

int main(void) {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);
    if (isKeyword(input)) {
        printf("%s is a keyword.\n", input);
    } else {
        printf("%s is not a keyword.\n", input);
    }
    return 0;
}