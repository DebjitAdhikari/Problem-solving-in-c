#include<stdio.h>
void function(int a)
{
  int i,remi,sum=0,count=0;
  while(a>0)
{
  remi=a%10;
  sum=sum+remi;
  a=a/10;
  count++;
}
printf("The number of digits are %d\nSum of them is %d",count,sum);
}
int main()
{
    int n;
    printf("Eneter then number\n");
    scanf("%d",&n);
    function(n);
    return 0;
}