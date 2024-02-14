#include <stdio.h>
// Function to calculate sum using recursion
int sumUsingRecursion(int n) {
    if (n == 0)
        return 0;
    else
        return n + sumUsingRecursion(n - 1);
}
    sum = sumUsingRecursion(n);

    printf("Sum using recursion: %d\n", sum);

    return 0;
}

