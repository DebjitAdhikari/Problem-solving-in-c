#include<stdio.h>
void table(int a)
{
  int i;
for(i=1;i<=a;i++)
  {
   printf("%d*%d=%d\n",a,i,a*i);
   }

}
int main()
{
    int n;
    printf("Eneter then number\n");
    scanf("%d",&n);
    table(n);
    
    
    
    
    return 0;
}