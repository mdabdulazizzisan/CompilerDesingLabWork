#include <stdio.h>
#include <string.h>
#include "keyword-check.c"    // Include this first to avoid circular dependency
#include "identifier-check.c"
#include "number-check.c"
#include "operator-check.c"

int main(void) {
    char input[100];
    int criteria_met = 0;  // Flag to track how many criteria is met
    
    printf("Enter a string to check: ");
    scanf("%s", input);
    
    // 1. Check if input is a keyword
    if (isKeyword(input)) {
        printf("'%s' is a C keyword\n", input);
        criteria_met++;
    }
    
    // 2. Check if input is a valid identifier
    if (isIdentifier(input)) {
        printf("'%s' is a valid identifier\n", input);
        criteria_met++;
    }
    
    // 3. Check if input is a number
    if (isNumber(input)) {
        printf("'%s' is a number\n", input);
        criteria_met++;
    }
    
    // 4. Check if input is an operator
    if (strlen(input) == 1 && isOperator(input[0])) {
        printf("'%s' is an operator\n", input);
        criteria_met++;
    }
    
    if (!criteria_met) {
        printf("'%s' doesn't fit any of the specified criteria\n", input);
    }else {
        printf("The string fits %d of the specified criteria\n", criteria_met);
    }
    
    return 0;
}
