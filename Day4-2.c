#include <stdio.h>

int main() {
    int n, sum;

    // Input n
    printf("Enter value of n: ");
    scanf("%d", &n);

    // Calculate sum
    sum = n * (n + 1) / 2;

    // Output result
    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
