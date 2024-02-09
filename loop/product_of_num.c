#include <stdio.h>

int main()
{
    int num,remi,pro=1;
    printf("Enter a num\n");
    scanf("%d",&num);
    while(num>0)
{
    remi=num%10;
    pro=pro*remi;
    num=num/10;
}
printf("Product of the num is %d",pro);
    return 0;
}
