#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    scanf("%s", str);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;   // convert lowercase to uppercase
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;   // convert uppercase to lowercase
        }
        i++;
    }

    printf("%s\n", str);

    return 0;
}
