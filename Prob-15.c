#include <stdio.h>

void addMatrices(int rows, int cols, int A[rows][cols], int B[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subtractMatrices(int rows, int cols, int A[rows][cols], int B[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

int main() {
    int rows, cols;

    // Input dimensions of matrices
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int A[rows][cols], B[rows][cols], resultAdd[rows][cols], resultSub[rows][cols];

    // Input elements for matrix A
    printf("Enter elements for matrix A:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Input elements for matrix B
    printf("Enter elements for matrix B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Perform addition
    addMatrices(rows, cols, A, B, resultAdd);

    // Perform subtraction
    subtractMatrices(rows, cols, A, B, resultSub);

    // Output the results
    printf("\nMatrix A:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix A + B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", resultAdd[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix A - B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", resultSub[i][j]);
        }
        printf("\n");
    }

    return 0;
}
