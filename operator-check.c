#ifndef OPERATOR_CHECK_H
#define OPERATOR_CHECK_H

const char OPERATORS[] = {'+', '-', '*', '/', '%', '=', '<', '>', '!', '&', '|', '^', '~', '?', ':', '[', ']', '(', ')', '{', '}', ',', ';', '.', '#'};

int isOperator(const char ch) {
    for (int i = 0; i < sizeof(OPERATORS); i++) {
        if (OPERATORS[i] == ch) {
            return 1;
        }
    }
    return 0;
}

#endif // OPERATOR_CHECK_H
