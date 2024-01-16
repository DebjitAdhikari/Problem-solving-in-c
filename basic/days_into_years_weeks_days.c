#include <stdio.h>

int main()
{
    int days,weeks,years,months;
    printf("Enter the days\n");
    scanf("%f",&days);
    years=days/365;
    days=days%365;
    months=days/30;
    days=days%30;
    weeks=days/7;
    days=days%7;
    printf("That means %d years\n %d months\n %d weeks\n %d days",years,months,weeks,days);
   
    return 0;
}
