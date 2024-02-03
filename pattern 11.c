O//           1 
//         0 1
//       1 0 1
//     0 1 0 1
//   1 0 1 0 1/

#include <stdio.h>

int main() {
    int rows ;
    int i, j, k;
    printf("Enter the rows no:-\n");
    scanf("%d",&rows);

    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (j = 1; j <= rows - i; j++) {
            printf("  ");
        }

        // Print 1 or 0 alternatively
        k = i % 2 == 0 ? 0 : 1;
        for (j = 1; j <= i; j++) {
            printf("%d ", k);
            k = k == 1 ? 0 : 1;
        }

        // Move to the next row
        printf("\n");
    }

    return 0;
}

