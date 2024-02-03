#include <stdio.h>
#include <string.h>

int main() {
    int i, f = 0;
    char str1[30];
    char str2[30];
    
    puts("Enter string 1:-");
    gets(str1);  // Note: gets() is deprecated, prefer using fgets()

    puts("Enter string 2:-");
    gets(str2);  // Note: gets() is deprecated, prefer using fgets()

    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            f = 1;
            break;
        }
    }
    
    // Issue 1: In the condition below, you are using assignment (=) instead of comparison (==)
    if (f == 0) {
        printf("The strings are same\n");
    } else {
        printf("The strings are not same\n");
    }
    
    return 0;
}

