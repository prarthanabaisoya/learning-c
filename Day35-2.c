#include <stdio.h>

int main() {
    int n, k, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    // Handle k greater than n
    k = k % n;

    // Print rotated array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[(n - k + i) % n]);
    }
    printf("\n");

    return 0;
}
