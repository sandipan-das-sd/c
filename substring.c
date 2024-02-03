#include <stdio.h>
#include <string.h>

int main() {
    char original[] = "Hello, world!";
    char result[100];  // Make sure to allocate enough space for the substring

    int start = 7;//from where we want to start extracting the string
    int length = 5;// how many lettres of  a string we want to extract

    int i, j = 0;
    for (i = start; i < start + length && original[i] != '\0'; i++) {
        result[j++] = original[i];
    }
    result[j] = '\0';

    printf("Original string: %s\n", original);
    printf("Substring: %s\n", result);

    return 0;
}

