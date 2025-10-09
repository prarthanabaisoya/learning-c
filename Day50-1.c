#include <stdio.h>
#include <string.h>

int main() {
    int day, month, year;
    char months[][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    // Input date in dd/mm/yyyy format
    scanf("%d/%d/%d", &day, &month, &year);

    // Output in dd-MMM-yyyy format
    if (month >= 1 && month <= 12)
        printf("%02d-%s-%d\n", day, months[month - 1], year);
    else
        printf("Invalid month\n");

    return 0;
}
