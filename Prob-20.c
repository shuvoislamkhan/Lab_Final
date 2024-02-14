#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    int *ptr = arr;
    for (int i = 0; i < n; i++) {
        sum += *ptr;
        ptr++;
    }
    printf("Sum of elements in the array: %d\n", sum);
    return 0;
}
