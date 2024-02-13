#include <stdio.h>
int add(int x,int y)
{
    if(y==0)
    return 0;
    else
    return (x+add(x,y-1));
}
int main()
{
    int a,b,m;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    m=add(a,b);
    printf("The multiplication of two numbers is %d \n",m);
    return 0;
}
