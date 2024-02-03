#include <stdio.h>
#include <string.h>
#define size 100

int main()
{
    char str1[size];
    char str2[size];
    printf("Enter string 1:-\n");
    gets(str1);

    int len, i, j;

    for (i = 0; str1[i] != '\0'; i++)
    {
    }

    len = i;

    for (j = len - 1; j >= 0; j--)
    {
        str2[len - j - 1] = str1[j];
    }

    str2[len] = '\0'; // Terminate the reversed string

    printf("The reverse string is:-\n");
    puts(str2);

    return 0;
}

