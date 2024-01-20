#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d", &year);
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
            printf("This year is leap year\n");
        else
            printf("This year isn't leap year\n");
    }
    else
    {
        if (year % 4 == 0)
            printf("This is leap year\n");
        else
            printf("This year isn't leap year\n");
    }
    return 0;
}
