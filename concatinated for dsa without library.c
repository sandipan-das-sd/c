#include <stdio.h>
#include <string.h>
#define size 40

int main() {
    char str1[size], str2[size];
    int len;
    int i, j;

    printf("Enter the 1st string:\n");
    gets(str1);

    printf("Enter the 2nd string:\n");
    gets(str2);

    // Calculate the length of the first string
    for (i = 0; str1[i] != '\0'; i++) {
        // Loop until the null-terminator is encountered
    }
    len = i; // Assign the length after the loop

    printf("The length of %s is %d\n", str1, len);
	str1[len] = ' '; // Add a space at the end of the first string
    len++;
    // Concatenate string 2 to the end of string 1
    for (j = 0; str2[j] != '\0'; j++) {
        str1[len + j] = str2[j]; // Copying characters from string 2 to string 1
    }
    str1[len + j] = '\0'; // Null-terminate the concatenated string

    printf("The concatenated string is: %s\n", str1);

    return 0;
}

