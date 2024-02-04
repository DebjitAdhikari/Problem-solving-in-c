#include <stdio.h>
int fact(int num)
{
    int i,s=1;
    for(i=1;i<=num;i++)
    {
        s=s*i;
    }
    return s;
} 
int main()
{
    int n,f;
    printf("Enter the number\n");
    scanf("%d",&n);
    f = fact(n);
    printf("The factorial of the number is %d\n",f);
    return 0;
}
