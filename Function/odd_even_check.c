#include <stdio.h>
int check(int a)
{
    if(a%2==0)
    return 0;
    else
    return 1;
}
int main()
{
    int n,c;
    printf("Enter the number\n");
    scanf("%d",&n);
    c=check(n);
    if(c==0)
    printf("Even\n");
    else
    printf("Odd\n");
    return 0;
}
