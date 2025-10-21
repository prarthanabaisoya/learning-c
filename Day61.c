#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);

    for (int i = 0; i <= n - k; i++) {
        int flag = 0; // to check if any negative found
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("0 ");
    }

    return 0;
}
