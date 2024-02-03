//       1
//      0 1
//    0  1 0
//   1   0 1  0
#include <stdio.h>

int main() {
    int n,i,j,k; // number of rows
    printf("Enter the no of rows:-\n");
    scanf("%d",&n);

    // loop for rows
    for (i = 1; i <= n; i++) {
        // loop for spaces
        for (j = 1; j <= n-i; j++) {
            printf(" ");
        }
        // loop for numbers
        for ( k = 1; k <= i; k++) {
            if ((k+i) % 2 == 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n"); // move to next line
    }
    
    return 0;
}

