#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year");
    scanf("%d",&year);
    year%100==0?year%400==0?printf("leap year"):printf("isn't a leap year"):year%4==0?printf("leap year"):printf("isn't leap year");
    return 0;
}
