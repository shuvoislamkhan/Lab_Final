#include <stdio.h>
// Function to calculate sum using mathematical formula
int sumUsingFormula(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n, sum = 0;

    // Input n from the user
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    sum = sumUsingFormula(n);
    printf("Sum using mathematical formula: %d\n", sum);
    return 0;
}