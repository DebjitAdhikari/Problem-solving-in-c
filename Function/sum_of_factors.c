#include <stdio.h>
int sum(a)
{
    int i,j=0;
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            j=j+i;
        }
    }
    return j;
}
int main()
{
    int n,s;
    printf("ENTer the number\n");
    scanf("%d",&n);
    s=sum(n);
    printf("The sum of the all factors is %d\n",s);
    return 0;
}
