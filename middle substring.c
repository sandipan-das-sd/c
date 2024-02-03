#include <stdio.h>
#include <string.h>

int main() {
    char original[] = "Hello, world!";
    char result[100];  // Make sure to allocate enough space for the substring

    int start = 7;     // Starting index of the substring
    int length = 5;    // Length of the substring to extract

    int i, j = 0;
    for (i = start; i < start + length && original[i] != '\0'; i++) {
        result[j++] = original[i];
    }
    result[j] = '\0';  // Null-terminate the result array

    printf("Original string: %s\n", original);
    printf("Middle Substring: %s\n", result);

    return 0;
}

