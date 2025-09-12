#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    
    printf("Enter number of terms: ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++) {
        sum += (float)(2 * i) / (4 * i - 1);
    }

    
    printf("Approximate sum: %.2f\n", sum);

    return 0;
}
