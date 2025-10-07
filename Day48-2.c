#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i = 0, len;

    // Read full sentence (including spaces)
    fgets(str, sizeof(str), stdin);

    // Remove newline at end if any
    len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';

    char *word_start = str;

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            reverseWord(word_start, &str[i - 1]);
            word_start = &str[i + 1];
        }
        i++;
    }
    // Reverse the last word
    reverseWord(word_start, &str[i - 1]);

    printf("%s\n", str);

    return 0;
}
