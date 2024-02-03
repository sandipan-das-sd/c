#include <stdio.h>

int main() {
    char word[] = "COMPUTER";
    int i,j;

    for (i = 1; i <= sizeof(word); i++) {
        for ( j = 0; j < i; j++) {
            printf("%c", word[j]);
        }
        printf("\n");
    }

    return 0;
}

