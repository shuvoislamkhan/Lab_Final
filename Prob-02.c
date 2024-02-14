#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double sum = 0.0, product = 1.0, sum_inverse = 0.0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter numbers:\n");
    for (int i = 1; i <= n; i++) {
        double num;
        scanf("%lf", &num);
        sum += num;
        product *= num;
        sum_inverse += 1.0 / num;    
    }

    double am = sum / n;
    double gm = pow(product, 1.0 / n);
    double hm = n / sum_inverse;

    printf("Arithmetic Mean= %lf\n", am);
    printf("Geometric Mean= %lf\n", gm);
    printf("Harmonic Mean= %lf\n", hm);

    return 0;
}
