#include <stdio.h>

int main()
{
    int a;
    printf("enter the num\n");
    scanf("%d",&a);
    a%2==0?printf("%d is a even num",a):printf("%d is a odd num",a);
    return 0;
}
