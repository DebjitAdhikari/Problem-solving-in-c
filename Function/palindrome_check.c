#include<stdio.h>
void palindrome(int a)
{
  int remi,num,rev=0;
  num=a;
  while(a>0)
{
  remi=a%10;
  rev=rev*10+remi;
  a=a/10;
}
if(rev==num)
printf("This number is a palindrome number\n");
else
printf("This number is not a palindrome\n");
}
int main()
{
    int n;
    printf("Eneter then number\n");
    scanf("%d",&n);
    palindrome(n);
    return 0;
}