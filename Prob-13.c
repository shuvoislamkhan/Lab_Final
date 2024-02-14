#include <stdio.h>
#include <math.h>
double f(double x) {
    return x*x - 18;
}
int main() {
    double a, b, tolerance;
    printf("Enter initial guesses a and b: ");
    scanf("%lf %lf", &a, &b);
    printf("Enter tolerance: ");
    scanf("%lf", &tolerance);
    if (f(a) * f(b) > 0) {
        printf("Initial guesses do not bracket the root.\n");
        return 1;
    }
    double c = a;
    while ((b - a) >= tolerance) {
        c = (a + b) / 2;
        if (f(c) == 0.0)
            break;
        else if (f(c) * f(a) < 0)
            b = c;
        else
            a = c;
    }
    printf("The root is approximately: %.6lf\n", c);
    return 0;
}
