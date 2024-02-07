#include <stdio.h>

int main()
{
    int bio=0,num,remi,w=1;
    printf("Enter the decimal number\n");
    scanf("%d",&num);
    while(num>0)
    {
        remi=num%2;
        bio=bio+remi*w;
        w=w*10;
        num=num/2;
    }
    printf("Binary is %d",bio);
    return 0;
}
