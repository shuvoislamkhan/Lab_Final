#include <stdio.h>
#include <math.h>

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
    double integral = f(a) + f(b);

    for (int i = 1; i < n; i += 2) {
        integral += 4 * f(a + i * h);
    }

    for (int i = 2; i < n - 1; i += 2) {
        integral += 2 * f(a + i * h);
    }

    integral *= h / 3;

    printf("The numerical integration result using Simpson's 1/3 Rule: %lf\n", integral);

    return 0;
}
