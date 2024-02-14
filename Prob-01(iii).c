#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate sum using do-while loop
    int i = 1;
    do {
        sum += i;
        i++;
    } while (i <= n);
    
    printf("Sum using do-while loop: %d\n", sum);
    return 0;
}