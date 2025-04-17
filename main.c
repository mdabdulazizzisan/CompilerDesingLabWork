#include <stdio.h>
#include "operator-check.c"

int main(void) {
    // Test the isOperator function
    const char testChar;
    printf("Enter a character: ");
    scanf("%c", &testChar);
    if (isOperator(testChar)) {
        printf("%c is an operator.\n", testChar);
    } else {
        printf("%c is not an operator.\n", testChar);
    }
















    return 0;
}