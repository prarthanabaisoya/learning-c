#include <stdio.h>

int main() {
    int n, i, pos, num;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1]; // +1 space for new element
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position and element to insert: ");
    scanf("%d %d", &pos, &num);

    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = num;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
