#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};  // to count frequency of each lowercase letter
    int i;
    char result = '\0';

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';
        freq[index]++;

        if (freq[index] == 2) {  // found first repeating character
            result = str[i];
            break;
        }
    }

    if (result != '\0')
        printf("%c\n", result);
    else
        printf("No repeating character\n");

    return 0;
}
