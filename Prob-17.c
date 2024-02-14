#include <stdio.h>
#include <stdlib.h>

// Function to multiply two matrices
void multiplyMatrices(int rowA, int colA, int A[rowA][colA], int rowB, int colB, int B[rowB][colB], int result[rowA][colB]) {
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int rowA, colA, rowB, colB;

    // Input dimensions of matrix A
    printf("Enter dimensions of matrix A (rows and columns): ");
    scanf("%d %d", &rowA, &colA);

    int A[rowA][colA];

    // Input elements for matrix A
    printf("Enter elements for matrix A:\n");
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colA; j++) {
            printf("Enter element A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Input dimensions of matrix B
    printf("Enter dimensions of matrix B (rows and columns): ");
    scanf("%d %d", &rowB, &colB);

    int B[rowB][colB];

    // Input elements for matrix B
    printf("Enter elements for matrix B:\n");
    for (int i = 0; i < rowB; i++) {
        for (int j = 0; j < colB; j++) {
            printf("Enter element B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Check if multiplication is possible
    if (colA != rowB) {
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }

    int result[rowA][colB];

    // Perform multiplication
    multiplyMatrices(rowA, colA, A, rowB, colB, B, result);

    // Output the result
    printf("Result of matrix multiplication (A * B):\n");
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
