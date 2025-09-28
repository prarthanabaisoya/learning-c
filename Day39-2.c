#include <stdio.h>

int main() {
    int n, m, i, j, sum = 0;
    scanf("%d %d", &n, &m);

    int a[n][m];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    if (n != m) {
        printf("Not a square matrix\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        sum += a[i][i];  // main diagonal elements
    }

    printf("%d\n", sum);

    return 0;
}
