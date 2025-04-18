
int isIdentifier(const char *str) {
    // Check if the first character is a valid starting character for an identifier
    if (!(str[0] == '_' || (str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z'))) {
        return 0; // Not a valid identifier //starts with invalid character
    }

    return 1; // Valid identifier
}
