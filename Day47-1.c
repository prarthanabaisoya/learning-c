#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count[256] = {0}; // To count character frequencies
    int i;

    scanf("%s", str1);
    scanf("%s", str2);

    // If lengths differ, they can't be anagrams
    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams\n");
        return 0;
    }

    // Count characters in str1
    for (i = 0; str1[i] != '\0'; i++)
        count[(unsigned char)str1[i]]++;

    // Subtract counts for str2
    for (i = 0; str2[i] != '\0'; i++)
        count[(unsigned char)str2[i]]--;

    // Check if all counts are zero
    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}
