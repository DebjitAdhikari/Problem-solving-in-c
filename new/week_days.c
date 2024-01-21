#include <stdio.h>
int main()

{
    int day;
    printf("Enter a day\n");
    scanf("%d", &day);
    if (day == 1)
    {
        printf("%dst day of week is Sunday", day);
    }
    else if (day == 2)
    {
        printf("%dnd day of week is Monday", day);
    }
    else if (day == 3)
    {
        printf("%drd day of week is Tuesday", day);
    }
    else if (day == 4)
    {
        printf("%dth day of week is Wednesday", day);
    }
    else if (day == 5)
    {
        printf("%dth day of week is Thrusday", day);
    }
    else if (day == 6)
    {
        printf("%dth day of week is Friday", day);
    }
    else if (day == 7)
    {
        printf("%dth day of week is Saturday", day);
    }
    else if (day > 7)
    {
        printf("%d number of day never exists in a week", day);
    }
    return 0;
}
