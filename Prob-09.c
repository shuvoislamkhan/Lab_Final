#include <stdio.h>
int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i < num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int n;
    printf("Enter the number to check: ");
    scanf("%d", &n);
    if (isPrime(number)==1)
        printf("Prime");
    else printf("Not prime");
    return 0;
}
