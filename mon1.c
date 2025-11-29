// wap to entre a no. till the user wants,at the end it should display the count of positivies,negatives and zeros entered by the user

#include <stdio.h>
int main () {
    char c ='y';
    int num, positive=0,negative=0,zeros=0;
    while (c=='y' || c=='Y'){
        printf("Enter any number:");
        scanf("%d",&num);

        if(num>0)
           positive++;
        else if(num<0)
           negative++;
        else
           zeros++;
        fflush(stdin);
        printf("Do you want to enter another number:(y/n)");
        scanf("%c",&c);

    }
   printf("\nCount of Positive Numbers: %d", positive);
    printf("\nCount of Negative Numbers: %d", negative);
    printf("\nCount of Zeros: %d\n", zeros);

    return 0;
}