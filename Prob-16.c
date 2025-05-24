#include <stdio.h>

// Determinant for 2x2 or 3x3 only
int determinant(int n, int A[100][100]) {
    if (n == 2) {
        return A[0][0] * A[1][1] - A[0][1] * A[1][0];
    } else if (n == 3) {
        return A[0][0] * (A[1][1] * A[2][2] - A[1][2] * A[2][1])
             - A[0][1] * (A[1][0] * A[2][2] - A[1][2] * A[2][0])
             + A[0][2] * (A[1][0] * A[2][1] - A[1][1] * A[2][0]);
    }
}

int main() {
    int n;

    // Input dimensions of matrix A
    printf("Enter dimension of square matrix A (2 or 3): ");
    scanf("%d", &n);

    int A[100][100], result[100][100];

    // Input elements
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Compute A^2
    printf("Resultant Matrix (A^2):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += A[i][k] * A[k][j];
            }
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // Output determinant
    int det = determinant(n, A);
    printf("Determinant of matrix A: %d\n", det );

    return 0;
}