#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0}; // frequency of digits 0–9
    int digit, i, maxDigit = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    // Count digit frequencies
    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find digit with maximum frequency
    for (i = 1; i < 10; i++) {
        if (freq[i] > freq[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);

    return 0;
}
