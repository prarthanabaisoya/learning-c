#include <stdio.h>

int main() {
    int rows, cols, i, j;
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    
    // Reading matrix elements
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Printing matrix elements
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
