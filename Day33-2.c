#include <stdio.h>

int main() {
    int n, i, num, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1]; // +1 space for new element
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &num);

    // Find position where num should be inserted
    pos = n;
    for (i = 0; i < n; i++) {
        if (arr[i] > num) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the number
    arr[pos] = num;
    n++;

    // Print result
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
