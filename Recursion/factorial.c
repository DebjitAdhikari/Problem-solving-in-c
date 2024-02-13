#include <stdio.h>
int fact(int n)
{
    if (n==0|| n==1)
        return 1;
    else
    return (n*fact(n-1));
}
int main()
{
    int num,f;
    printf("Ente the number \n");
    scanf("%d",&num);
    f=fact(num);
    printf("%d ",f);
    return 0;
}
