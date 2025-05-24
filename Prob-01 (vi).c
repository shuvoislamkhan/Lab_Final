#include <stdio.h>
// Function to calculate sum using recursion
int sumUsingRecursion(int n) {
    if (n == 0)
        return 0;
    else
        return n + sumUsingRecursion(n - 1);
}
int main() {
    int n;
    // Input n from the user
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    int sum = sumUsingRecursion(n);

    printf("Sum using recursion: %d\n", sum);

    return 0;
}

