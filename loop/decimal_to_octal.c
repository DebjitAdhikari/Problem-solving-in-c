#include <stdio.h>

int main()
{
    int num,oct=0,remi,w=1;
    printf("Enter the decimal number\n");
    scanf("%d",&num);
    while(num>0)
    {
        remi=num%8;
        oct=oct+remi*w;
        w=w*10;
        num=num/10;
    }
    printf("Octal is %d",oct);
    return 0;
}
