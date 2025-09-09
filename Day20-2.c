#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];

    // Input binary number as string
    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Find 1's complement by flipping each bit
    for (int i = 0; i < strlen(binary); i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid input! Only 0s and 1s allowed.\n");
            return 0;
        }
    }

    // Output result
    printf("1's Complement = %s\n", binary);

    return 0;
}
