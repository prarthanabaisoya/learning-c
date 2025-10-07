#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    // Read inputs
    scanf("%s", str1);
    scanf("%s", str2);

    // If lengths are not equal, cannot be rotations
    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation\n");
        return 0;
    }

    // Concatenate str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL)
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}
