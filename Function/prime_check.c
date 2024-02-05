#include<stdio.h>
int fact(int a)
{
  int i,flag=0;
  
  for(i=2;i<=a/2;i++)
{
  if(a%i==0)
 {
  flag=1;
  break;
  }
}
return flag;
}
int main()
{
    int n,f;
    printf("Eneter then number\n");
    scanf("%d",&n);
    f=fact(n);
    if (f==0)
    printf("prime number\n");
    else
    printf("not prime\n");
    return 0;
}