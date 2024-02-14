#include <stdio.h>

// Function to multiply two matrices
void multiplyMatrices(int n, int A[n][n], int result[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += A[i][k] * A[k][j];
            }
        }
    }
}

// Function to calculate determinant of a square matrix
int determinant(int n, int A[n][n]) {
    int det = 0;
    if (n == 1) {
        return A[0][0];
    } else if (n == 2) {
        return A[0][0] * A[1][1] - A[0][1] * A[1][0];
    } else
        return A[0][0] * (A[1][1] * A[2][2] - A[1][2] * A[2][1])
              - A[0][1] * (A[1][0] * A[2][2] - A[1][2] * A[2][0])
              + A[0][2] * (A[1][0] * A[2][1] - A[1][1] * A[2][0]);
}

int main() {
    int n;

    // Input dimensions of matrix A
    printf("Enter dimensions of matrix A (rows or columns): ");
    scanf("%d", &n);
    int A[n][n], result[n][n];

    // Input elements for matrix A
    printf("Enter elements for matrix A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Perform multiplication
    multiplyMatrices(n, A, result);

    // Output the result
    printf("Result of matrix multiplication (A * A):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // Output the determinant
    int det = determinant(n, A);
    printf("Determinant of matrix A: %d\n", det*det);

    return 0;
}
