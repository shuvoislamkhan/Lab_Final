#include <stdio.h>12
int main() {
    int n, sum = 0;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    int i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }
    printf("Sum using while loop: %d\n", sum);
    return 0;
}
