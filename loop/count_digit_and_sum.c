#include<stdio.h>
int main() {
int n,sum=0,r,i=0;
printf("enter num\n");
scanf("%d",&n);
while(n>0)
{ r=n%10;
  sum=sum+r;
  n=n/10;
    i++;}
    printf("num is %d and sum is %d",i,sum);
	return 0;
}