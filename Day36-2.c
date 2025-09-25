#include <stdio.h>

int main() {
    int rows, cols, i, j, sum = 0;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // Read matrix elements
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // Add element to sum
        }
    }

    // Print sum
    printf("%d\n", sum);

    return 0;
}
