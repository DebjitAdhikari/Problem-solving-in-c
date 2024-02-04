#include<stdio.h>
void fact(int a)
{
  int i;
  printf("The factors of %d \n",a);
  for(i=2;i<=a/2;i++)
{
  if(a%i==0)
 {
  printf("%d ",i);
  }
}

}
int main()
{
    int n;
    printf("Eneter then number\n");
    scanf("%d",&n);
    fact(n);
    return 0;
}