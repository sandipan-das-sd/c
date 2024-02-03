#include <stdio.h>
#include <string.h>
#define size 40

int main() {
    char str1[size];
    char str2[size];
    puts("Enter string 1:\n");
    gets(str1);
    puts("Enter string 2:\n");
    gets(str2);

    int len1, len2, i, j, flag = 1;

    for (i = 0; str1[i] != '\0'; i++) {
        // Count the characters in the first string
    }
    len1 = i;

    for (j = 0; str2[j] != '\0'; j++) {
        // Count the characters in the second string
    }
    len2 = j;

    if (len1 != len2) {
        flag = 0; // Set flag to 0 if lengths are different
    } else {
        for (i = 0; i < len1; i++) {
            if (str1[i] != str2[i]) {
                flag = 0; // Set flag to 0 if characters don't match
                break;    // Break the loop when a mismatch is found
            }
        }
    }

    if (flag == 1) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    return 0;
}

