#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the num");
    scanf("%d%d%d",&a,&b,&c);
    a>b?a>c?printf("a is max"):printf("c is max"):b>c?printf("b is max"):printf("c is max");
    return 0;
}