#include <stdio.h>

int main() {
    char name[100];
    int i = 0;

    // Read full name (including spaces)
    fgets(name, sizeof(name), stdin);

    // Print first character (if not a space)
    if (name[0] != ' ' && name[0] != '\n')
        printf("%c.", name[0]);

    // Loop through to find spaces and print next character
    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\n' && name[i + 1] != '\0') {
            printf("%c.", name[i + 1]);
        }
        i++;
    }

    return 0;
}
