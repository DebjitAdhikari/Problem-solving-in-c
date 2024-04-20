#include <stdio.h>
typedef struct date{
    int day,month,year;
}dtype;
void input(dtype d1)
{
    printf("Enter the date\n");
    printf("Day - ");
    scanf("%d",&d1.day);
    printf("Month - ");
    scanf("%d",&d1.month);
    printf("Year - ");
    scanf("%d",&d1.year);
}
void input1(dtype d2)
{
    printf("Enter another date\n");
    printf("Day - ");
    scanf("%d",&d2.day);
    printf("Month - ");
    scanf("%d",&d2.month);
    printf("Year - ");
    scanf("%d",&d2.year);
}
void check(dtype d1,dtype d2)
{
    //if(d1==d2)
    if(d1.day==d2.day&&d1.month==d2.month&&d1.year==d2.year)
    {
        printf("Dates are equal\n");
    }
    else
    printf("Dates are not equal\n");
}
int main()
{
    dtype d1,d2;
    input(d1);  
    input1(d2);
    check(d1,d2);
    return 0;
}
