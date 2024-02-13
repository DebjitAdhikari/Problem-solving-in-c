#include <stdio.h>
int div(int x,int y)
{
    if (y%x==0)
      return x;
    else
      div(y,y%x);
}
int main()
{
    int hcd,a,b;
    printf("Enter the two numbers\n");
    scanf("%d%d",&a,&b);
    hcd=div(a,b);
    printf("The hcd is %d\n",hcd);
    return 0;
}
