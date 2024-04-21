#include <stdio.h>

int main()
{
    int ch;
    printf("enter any alphabet");
    scanf("%c",&ch);
    ch>=65&&ch<=90?printf("upper case alphabet"):ch>=97&&ch<=122?printf("lower case alphabet"):printf("not an alphabet");
    return 0;
}
