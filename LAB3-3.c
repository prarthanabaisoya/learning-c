//3.    According to the gregorian calendar, it was Monday on the date 01/01/01. If Any year is input through the keyboard write a program to find out what is the day on 1st January of this year.
#include <stdio.h>

int main() {
    int year, leapYears, totalDays, day;

    printf("Enter the year: ");
    scanf("%d", &year);


    leapYears = (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;

    
    totalDays = (year - 1) * 365 + leapYears;

 
    day = totalDays % 7;

    printf("On 1st January %d, it was ", year);
    switch (day) {
        case 0: printf("Monday"); break;
        case 1: printf("Tuesday"); break;
        case 2: printf("Wednesday"); break;
        case 3: printf("Thursday"); break;
        case 4: printf("Friday"); break;
        case 5: printf("Saturday"); break;
        case 6: printf("Sunday"); break;
    }
    printf(".\n");

    return 0;
}