#include <stdio.h>
struct date{
    int day,months,year;
};
int main()
{
    struct date d1,d2;
    printf("Enter the first date [DD MM YY]\n");
    scanf("%d%d%d",&d1.day,&d1.months,&d1.year);
    printf("Enter the second date [DD MM YY]\n");
    scanf("%d%d%d",&d2.day,&d2.months,&d2.year);
    if(d1.day==d2.day&&d1.months==d1.months&&d1.year==d2.year)
    {
        printf("Dates are equal\n");      
    }
    else
    printf("Dates aren't equal\n");
    return 0;
}
