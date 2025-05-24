#include <stdio.h>

// Function to integrate
double f(double x) {
    return 1 / (1 + x);
}

int main() {
    double a, b;
    int n;
    printf("Enter lower limit a: ");
    scanf("%lf", &a);
    printf("Enter upper limit b: ");
    scanf("%lf", &b);
    printf("Enter the number of intervals (must be even): ");
    scanf("%d", &n);

    if (n % 2 != 0) {
        printf("Number of intervals must be even for Simpson's 1/3 Rule.\n");
        return 1;
    }
    double h = (b - a) / n;
    double sum = f(a) + f(b);

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        if (i % 2 == 0)
            sum += 2 * f(x);
        else
            sum += 4 * f(x);
    }

    double result = (h / 3.0) * sum;

    printf("The numerical integration result using Simpson's 1/3 Rule: %lf\n", result);

    return 0;
}
