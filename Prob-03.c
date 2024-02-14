#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double sum = 0.0, mean, deviation = 0.0;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    double numbers[n];

    // Input the numbers
    printf("Enter numbers:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%lf", &numbers[i]);
        sum += numbers[i];
    }

    // Calculate mean
    mean = sum / n;

    // Calculate standard deviation
    for (int i = 0; i < n; ++i) {
        deviation += pow(numbers[i] - mean, 2);
    }
    deviation = sqrt(deviation / n);

    // Output the results
    printf("Mean: %lf\n", mean);
    printf("Standard Deviation: %lf\n", deviation);

    return 0;
}
