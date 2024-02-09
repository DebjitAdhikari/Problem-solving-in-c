#include <stdio.h>

int main()
{
    int num,dec=0,remi,w=1;
    printf("Enter the octal number\n");
    scanf("%d",&num);
    while(num>0)
    {
        remi=num%10;
        dec=dec+w*remi;
        w=w*8;
        num=num/10;
    }
    printf("Decimal is %d",dec);
    return 0;
}
