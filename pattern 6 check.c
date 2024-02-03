#include <stdio.h>

int main() {
    int n = 5,i,j,k;

    for ( i = 1; i <= n; i++) {
        for (j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for (k = 1; k <= i; k++) {
            if (k == i && i == n) {
                printf("/");
            } else if (k == 1) {
                printf("/");
            } else if (k == i) {
                printf("\\");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}

