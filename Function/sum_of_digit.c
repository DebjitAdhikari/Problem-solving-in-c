#include <stdio.h>
int sum(int a)
{
    int remi,j=0;
    while(a>0)
    {
        remi=a%10;
        j=j+remi;
        a=a/10;
    }
    return j;
}
int main()
{
    int n,s;
    printf("Enter the number\n");
    scanf("%d",&n);
    s=sum(n);
    printf("The sum of all digit is %d\n",s);
    return 0;
}
