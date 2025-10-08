#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char words[10][20];  // to store individual words
    int i = 0, j = 0, k = 0;

    // Read full name
    fgets(name, sizeof(name), stdin);

    // Split name into words
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' || name[i] == '\n') {
            words[k][j] = '\0';
            k++;
            j = 0;
        } else {
            words[k][j++] = name[i];
        }
    }

    // Print initials of all but last word
    for (i = 0; i < k - 1; i++) {
        if (words[i][0] != '\0')
            printf("%c.", words[i][0]);
    }

    // Print last word (surname)
    printf(" %s\n", words[k - 1]);

    return 0;
}
