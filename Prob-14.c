#include <stdio.h>
#include <math.h>
double f(double x) {
    return x*x*x - 18;
}
double f_prime(double x) {
    return 3*x*x;
}
int main() {
    double x0, tolerance;
    printf("Enter initial guess x0: ");
    scanf("%lf", &x0);
    printf("Enter tolerance: ");
    scanf("%lf", &tolerance);
    double x1;
    do {
        x1 = x0 - f(x0) / f_prime(x0);
        x0 = x1;
    } while (fabs(f(x1)) > tolerance);
    printf("The root is approximately: %.6lf\n", x1);
    return 0;
}
