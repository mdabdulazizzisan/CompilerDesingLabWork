#include <stdio.h>
#include "identifier-check.c"

int main(void) {
    char input[100];
    printf("Enter a name as identifier: ");
    scanf("%s", input);
    if (!isIdentifier(input)) {
        printf("%s is not an identifier.\n %c is an invalid character at the beginning of an identifier.\n", input, input[0]);
    } else if (isIdentifier(input) == 2) {
        printf("%s is a valid identifier.\n", input);
    } else {
        printf("%s is not a valid identifier.\n", input);
    }
    return 0;
}