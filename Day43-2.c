#include <stdio.h>

int main() {
    char str[100];
    int len = 0, i, isPalindrome = 1;

    // Read string (with spaces too if needed)
    scanf("%[^\n]", str);

    // Find length
    while (str[len] != '\0') {
        len++;
    }

    // Compare characters from both ends
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
