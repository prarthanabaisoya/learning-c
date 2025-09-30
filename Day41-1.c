#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    // Read string (with spaces also possible)
    scanf("%[^\n]", str);

    // Count manually until '\0' (end of string)
    while (str[count] != '\0') {
        count++;
    }

    printf("%d\n", count);

    return 0;
}
