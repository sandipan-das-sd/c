//      1 
//      1 0
//     1 0 1
//    1 0 1 0
#include <stdio.h>

int main() {
    int n ,j,i,k; // number of rows
printf("Enter the number:-\n");
scanf("%d",&n);
    // loop for rows
    for ( i = 1; i <= n; i++) {
        // loop for spaces
        for (j = 1; j <= n-i; j++) {
            printf(" ");
        }
        // loop for numbers
        for (k = 1; k <= i; k++) {
            if (k % 2 == 1) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n"); // move to next line
    }
    
    return 0;
}

