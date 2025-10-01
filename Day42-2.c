#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Read string (with spaces too)
    scanf("%[^\n]", str);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert lowercase to uppercase
        }
        i++;
    }

    printf("%s\n", str);

    return 0;
}
