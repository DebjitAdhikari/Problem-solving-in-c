#include <stdio.h>
int main()
{
    int num,temp,remi,sum=0,nod=0,f=1,i;
    printf("Enter the number\n");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        nod++;
        num=num/10;
    }
    num=temp;
    
    while(num>0)
    {
        remi=num%10;
        for(i=1;i<=nod;i++)
        {
            f=f*remi;
        }
        sum=sum+f;
        num=num/10;
    }
    if(temp==sum)
    {
        printf("This number is Armstrong");
    }
    else
    {
         printf("This number is not Armstrong");
    }

    return 0;
}
