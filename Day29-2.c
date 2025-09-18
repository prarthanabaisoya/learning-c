#include <stdio.h>

int main() {
    int n;

    // Read the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array
    int arr[n];

    // Read array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with the first element
    int max = arr[0];
    int min = arr[0];

    // Iterate through the array to find max and min
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Print the maximum and minimum elements
    printf("Max=%d, Min=%d\n", max, min);

    return 0;
}