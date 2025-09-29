#include <stdio.h>

int main() {
    int n, m, i, j;
    scanf("%d %d", &n, &m);

    int a[n][m];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Traverse each diagonal
    for (int k = 0; k < n + m - 1; k++) {
        if (k < m) {
            i = 0;
            j = k;
        } else {
            i = k - m + 1;
            j = m - 1;
        }

        while (i < n && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}
