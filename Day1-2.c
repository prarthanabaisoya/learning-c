#include <stdio.h>

int main() {
    float num1, num2, sum, difference, product, quotient;

    
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    if (num2 != 0) {
        quotient = num1 / num2;
        printf("Sum = %.2f\n", sum);
        printf("Difference = %.2f\n", difference);
        printf("Product = %.2f\n", product);
        printf("Quotient = %.2f\n", quotient);
    } else {
        printf("Sum = %.2f\n", sum);
        printf("Difference = %.2f\n", difference);
        printf("Product = %.2f\n", product);
        printf("Quotient = Undefined (division by zero not allowed)\n");
    }

    return 0;
}
