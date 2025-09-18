#include <stdio.h>

int main() {
    int n, sum = 0;

    // Read the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Read the array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of the array elements
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Print the sum
    printf("Sum of the elements: %d\n", sum);

    return 0;
}