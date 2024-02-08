#include <stdio.h>

int main()
{
    int num,freq,remi,count=0,temp;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("Enter the frequency\n");
    scanf("%d",&freq);
    temp=num;
    while(num>0)
    {
        remi=num%10;
        num=num/10;
        if(freq==remi)
        {
            count++;
        }
    }
    printf("%d in %d is %d times",freq,temp,count);
    return 0;
}
