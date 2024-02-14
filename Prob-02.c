#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double sum = 0.0, product = 1.0, sum_inverse = 0.0;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input the numbers
    printf("Enter numbers:\n");
    for (int i = 0; i < n; ++i) {
        double num;
        scanf("%lf", &num);

        // Arithmetic Mean
        sum += num;  

        // Geometric Mean
        product *= num;

        // Harmonic Mean
        sum_inverse += 1.0 / num;    }

    // Calculate means
    double arithmetic_mean = sum / n;
    double geometric_mean = pow(product, 1.0 / n);
    double harmonic_mean = n / sum_inverse;

    // Output the results
    printf("Arithmetic Mean: %lf\n", arithmetic_mean);
    printf("Geometric Mean: %lf\n", geometric_mean);
    printf("Harmonic Mean: %lf\n", harmonic_mean);

    return 0;
}
