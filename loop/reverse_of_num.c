#include <stdio.h>

int main()
{
    int rev=0,num,remi;
    printf("Enter a num\n");
    scanf("%d",&num);
    while(num>0)
    {
        remi=num%10;
        num=num/10;
        rev=rev*10+remi;
    }
    printf("The reverse of the number is %d",rev);
    return 0;
}
