#include <stdio.h>

int main() {
    int n;

    // Input the number of elements
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Sequence of first %d even numbers:\n", n);
    for (int i = 1; i <= n; ++i) {
        printf("%d ", 2 * i);
    }

    printf("\nSequence of first %d odd numbers:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("%d ", 2 * i + 1);
    }

    return 0;
}
