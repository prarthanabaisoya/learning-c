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

    // Only valid for square matrices
    if (n != m) {
        printf("False\n");
        return 0;
    }

    int diag[n], k = 0;
    for (i = 0; i < n; i++) {
        diag[k++] = a[i][i];  // store diagonal elements
    }

    int distinct = 1;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (diag[i] == diag[j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct) break;
    }

    if (distinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
