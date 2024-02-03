#include <stdio.h>

#define SIZE 5 // Define the size of the matrix

void printMatrix(int matrix[SIZE][SIZE]) {
	int i,j;
    // Iterate over the rows and columns to print the matrix
    for ( i = 0; i < SIZE; i++) {
        for ( j = 0; j < SIZE; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[SIZE][SIZE];
    int i,j;
    
    // Initialize the matrix with diagonal elements as 1 and others as 0
    for ( i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (i == j) {
                matrix[i][j] = 1;
            } else {
                matrix[i][j] = 0;
            }
        }
    }
    
    // Print the diagonal matrix
    printf("Diagonal Matrix:\n");
    printMatrix(matrix);
    
    return 0;
}

