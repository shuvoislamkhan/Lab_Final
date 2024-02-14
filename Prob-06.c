#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int coefficient = 1;
        for (int j = 1; j <= n - i; j++)
            printf("  ");
        for (int k = 0; k <= i; k++) {
            printf("%4d", coefficient);
            coefficient = coefficient * (i - k) / (k + 1);
        }
        printf("\n");
    }
    return 0;
}
