#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);

    if (ch>='A' && ch<='Z') {
        printf("Is an Uppercse letter",ch);
    
    }
    else if (ch>='a' && ch<='z'){
        printf("Is a lowercase letter",ch);
    }
    else if (ch>='0' && ch<='9'){
        printf("Is a digit",ch);
    }
    else {
        printf("Is a special character");

    }
    return 0;
}