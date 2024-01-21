#include <stdio.h>

int main()
{
    int mon;
    printf("Enter the month\n");
    scanf("%d", &mon);
    if (mon == 1)
    {
        printf("%dst month of year has 31days", mon);
    }
    else if (mon == 2)
    {
        printf("%dnd month of year has 28days", mon);
    }
    else if (mon == 3)
    {
        printf("%drd month of year has 31days", mon);
    }
    else if (mon == 4)
    {
        printf("%dth month of year has 30days", mon);
    }
    else if (mon == 5)
    {
        printf("%dth month of year has 31days", mon);
    }
    else if (mon == 6)
    {
        printf("%dth month of year has 30days", mon);
    }
    else if (mon == 7)
    {
        printf("%dth month of year has 31days", mon);
    }
    else if (mon == 8)
    {
        printf("%dth month of year has 31days", mon);
    }
    else if (mon == 9)
    {
        printf("%dth month of year has 30days", mon);
    }
    else if (mon == 10)
    {
        printf("%dth month of year has 31days", mon);
    }
    else if (mon == 11)
    {
        printf("%dth month of year has 30days", mon);
    }
    else if (mon == 12)
    {
        printf("%dth month of year has 31days", mon);
    }
    else
    {
        printf("%d numbers of month never exist in a year", mon);
    }
    return 0;
}
