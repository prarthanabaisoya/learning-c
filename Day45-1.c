#include <stdio.h>

int main() {
    char str[200], ch;
    int i = 0, count = 0;

    // Read string
    scanf("%s", str);

    // Read character to count
    scanf(" %c", &ch);

    while (str[i] != '\0') {
        if (str[i] == ch)
            count++;
        i++;
    }

    printf("%d\n", count);

    return 0;
}
