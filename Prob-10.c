#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}
int main() {
    int n, count = 0, num = 2;
    printf("Enter the number of prime numbers: ");
    scanf("%d", &n);
    printf("First %d prime numbers: ", n);
    while (count < n) {
        if (isPrime(num)) {
            printf("%d, ", num);
            count++;
        }
        num++;
    }
    return 0;
}
