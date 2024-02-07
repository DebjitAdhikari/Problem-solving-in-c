#include <stdio.h>

int main()
{
    int num,i,sum=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    {
        printf("This number is perfect");
    }
    else
    {
        printf("This number is not perfect");
    }
    return 0;
}
