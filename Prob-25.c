#include <stdio.h>

// Function to integrate
double f(double x) {
    return 1 / (1 + x * x);
}

int main() {
    double a, b;
    int n;
    printf("Enter lower limit a: ");
    scanf("%lf", &a);
    printf("Enter upper limit b: ");
    scanf("%lf", &b);
    printf("Enter the number of intervals: ");
    scanf("%d", &n);
    double h = (b - a) / n;
    double integral = (f(a) + f(b)) / 2;

    for (int i = 1; i < n; i++) {
        integral += f(a + i * h);
    }

    integral *= h;

    printf("The numerical integration result using Trapezoidal Rule: %lf\n", integral);

    return 0;
}
