#include <stdio.h>
int main(){
    int age=0;
    char name[80];
    printf("Enter your age");
    scanf("%d",&age);
    printf("Enter your name");
    scanf("%s",&name);

    printf("the name entered by user is %s and age is %d",name ,age);
    return 0;
}