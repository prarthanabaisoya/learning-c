#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);   // Input rows and columns
    
    int matrix[m][n];
    int rowSum[m];  // Array to store sum of each row
    
    // Input matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Calculate row sums
    for (int i = 0; i < m; i++) {
        rowSum[i] = 0;  // initialize
        for (int j = 0; j < n; j++) {
            rowSum[i] += matrix[i][j];
        }
    }
    
    // Print row sums
    for (int i = 0; i < m; i++) {
        printf("%d ", rowSum[i]);
    }
    
    return 0;
}
