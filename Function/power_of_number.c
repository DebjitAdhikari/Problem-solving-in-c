#include <stdio.h>
int pow(int a,int b)
{
    int i,j=1;
    for(i=1;i<=b;i++)
    {
        j=j*a;
    }
    return j;
}
int main()
{
    int x,y,p;
    printf("Enter the base\n");
    scanf("%d",&x);
    printf("Enter the power\n");
    scanf("%d",&y);
    p=pow(x,y);
    printf("%d",p);
    return 0;
}
