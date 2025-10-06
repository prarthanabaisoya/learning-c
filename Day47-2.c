#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, len;

    // Read a full line including spaces
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline character if present
    sentence[strcspn(sentence, "\n")] = '\0';

    while (1) {
        if (sentence[i] != ' ' && sentence[i] != '\0') {
            word[j++] = sentence[i];
        } else {
            word[j] = '\0';
            len = strlen(word);
            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }
            j = 0;
            if (sentence[i] == '\0')
                break;
        }
        i++;
    }

    printf("%s\n", longest);
    return 0;
}
