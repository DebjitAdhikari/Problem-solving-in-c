#include <stdio.h>

int main()
{
    int w=1,dec=0,num,remi;
    printf("Enter the binary number\n");
    scanf("%d",&num);
    while(num>0)
    {
        remi=num%10;
        dec=dec+remi*w;
        w=w*2;
        num=num/10;
    }
    printf("Decimal is %d\n",dec);
    return 0;
}
