#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];

    // Open the existing file in append mode
    fp = fopen("data.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Get text input from user
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append text to file
    fputs(text, fp);

    fclose(fp); // Close the file
    printf("File updated successfully with appended text.\n");

    return 0;
}
