//1
//123
//456
//78910//

#include <stdio.h>

int main() {
    int n,i,j; // number of rows
    printf("Enter the no of rows:-\n");
    scanf("%d",&n);
    int count = 1; // initialize counter
    
    // loop for rows
    for (i = 1; i <= n; i++) {
        // loop for columns
        for (j = 1; j <= i; j++) {
            printf("%d", count);
            count++;
        }
        printf("\n"); // move to next line
    }
    
    return 0;
}

