#include <stdio.h>
int main() {
    int n, sum = 0;

    // Input n from the user
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("Sum using mathematical formula: %d\n", sum);
    return 0;
}