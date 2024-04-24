#include <stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Enter the nubmer\n");
    scanf("%d",&n);
    printf("Factorial is %d",fact(n));
    return 0;
}
int fact (int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    return (n*fact(n-1));
}
