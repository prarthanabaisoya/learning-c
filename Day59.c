#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter window size k: ");
    scanf("%d", &k);

    int sum = 0;
    for (int i = 0; i < k; i++)
        sum += arr[i];

    int max_sum = sum;

    // Sliding window: remove first, add next
    for (int i = k; i < n; i++) {
        sum = sum - arr[i - k] + arr[i];
        if (sum > max_sum)
            max_sum = sum;
    }

    printf("%d", max_sum);
    return 0;
}
