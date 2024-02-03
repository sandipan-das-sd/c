#include <stdio.h>
#include <string.h>

int main() {
    char original[] = "Hello, world!";
    char result[100];  // Make sure to allocate enough space for the substring

    int length = 5;  // Length of the substring to extract

    int i;
    for (i = 0; i < length && original[i] != '\0'; i++) {
        result[i] = original[i];
    }
    result[i] = '\0';  // Null-terminate the result array

    printf("Original string: %s\n", original);
    printf("Left Substring: %s\n", result);

    return 0;
}

