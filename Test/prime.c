#include <stdio.h>
int prime(int);
int main()
{
    int n;
    printf("enter the nubmers\n");
    scanf("%d",&n);
    if(prime(n)==0)
    {
        printf("This nuber is a prime\n");
    }
    else
    printf("THis nubmer is not prime\n");
    return 0;
}
int prime(int n)
{
    int i,flag=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    return flag;
}
