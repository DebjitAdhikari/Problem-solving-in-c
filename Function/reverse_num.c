#include<stdio.h>
int reverse(int a)
{
  int remi,rev=0;
  while(a>0)
{
  remi=a%10;
  rev=rev*10+remi;
  a=a/10;
}
return rev;
}
int main()
{
    int n,r;
    printf("Eneter then number\n");
    scanf("%d",&n);
    r=reverse(n);
    printf("The reverse of the number is %d",r);
    return 0;
}