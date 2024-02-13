#include <stdio.h>
int power(int x, int y)
{
    if (y==0)
    return 1;
    else 
    return (x*power(x,y-1));
}
int main()
{
    int a,b,p;
    printf("Enter the base and the power\n");
    scanf("%d%d",&a,&b);
    p=power(a,b);
    printf("The ans is %d\n",p);
    return 0;
}
