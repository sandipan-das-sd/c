#include <stdio.h>
#include<string.h>

int main() {
    char word[] = "COMPUTER";
    int i,j;
     int length = strlen(word);

    for (i = 1; i <= length; i++) {
        for ( j = 0; j < i; j++) {
            printf("%c", word[j]);
        }
        printf("\n");
    }

    return 0;
}

