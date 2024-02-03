#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_ROWS 10
#define MAX_COLS 10

typedef struct {
    int rows;
    int cols;
    double mat[MAX_ROWS][MAX_COLS];
    int basis[MAX_ROWS]; // indices of basic variables
} lp_problem;

void print_lp(lp_problem* lp) {
    int i, j;
    printf("Maximize: ");
    for (j = 0; j < lp->cols; j++) {
        printf("%.2f*x%d", lp->mat[0][j], j+1);
        if (j != lp->cols-1) {
            printf(" + ");
        }
    }
    printf("\nSubject to:\n");
    for (i = 1; i < lp->rows; i++) {
        for (j = 0; j < lp->cols; j++) {
            printf("%.2f*x%d", lp->mat[i][j], j+1);
            if (j != lp->cols-1) {
                printf(" + ");
            }
        }
        printf(" <= %.2f\n", lp->mat[i][j]);
    }
}

void pivot(lp_problem* lp, int row, int col) {
    double pivot_val = lp->mat[row][col];
    int i, j;

    // divide pivot row by pivot value
    for (j = 0; j < lp->cols; j++) {
        lp->mat[row][j] /= pivot_val;
    }

    // subtract pivot row times pivot column from other rows
    for (i = 0; i < lp->rows; i++) {
        if (i == row) {
            continue;
        }
        double factor = lp->mat[i][col];
        for (j = 0; j < lp->cols; j++) {
            lp->mat[i][j] -= factor * lp->mat[row][j];
        }
    }

    // update basis
    lp->basis[row] = col;
}

bool simplex(lp_problem* lp) {
    // make sure objective function is maximization
    if (lp->mat[0][0] < 0) {
        int j;
        for (j = 0; j < lp->cols; j++) {
            lp->mat[0][j] *= -1;
        }
    }

    // initialize basis
    int i;
    for (i = 1; i < lp->rows; i++) {
        lp->basis[i] = lp->cols - lp->rows + i;
    }

    while (1) {
        // find entering variable (most negative coefficient in objective function)
        int entering_col = -1;
        for (i = 0; i < lp->cols; i++) {
            if (lp->mat[0][i] < 0 && (entering_col == -1 || lp->mat[0][i] < lp->mat[0][entering_col])) {
                entering_col = i;
            }
        }
        if (entering_col == -1) {
            // optimal solution found
            return true;
        }

        // find leaving variable (smallest ratio of constant term to coefficient of entering variable)
        int leaving_row = -1;
        double min_ratio;
        for (i = 1; i < lp->rows; i++) {
            double coef = lp->mat[i][entering_col];
            if (coef <= 0) {
                continue;
            }
            double ratio = lp->mat[i][lp];
