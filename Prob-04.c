#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Sequence of even numbers:\n");
    for (int i = 1; i <= n; i++) {
        printf("%d ", 2 * i);
    }

    printf("\nSequence of odd numbers:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", 2 * i + 1);
    }

    return 0;
}
