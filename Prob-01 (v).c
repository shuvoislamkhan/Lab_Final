#include <stdio.h>
// Function to calculate sum using user-defined function:
int sumUsingFormula(int n) {
    return n * (n + 1) / 2;
}
int main() {
    int n, sum = 0;

    // Input n from the user
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    sum = sumUsingFormula(n);
    printf("Sum using user-defined function: %d\n", sum);
    return 0;
}