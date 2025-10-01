#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;

    // Read string with spaces
    scanf("%[^\n]", str);

    while (str[i] != '\0') {
        char ch = str[i];

        // Check for alphabets only
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // Convert to lowercase for simplicity
            char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}
