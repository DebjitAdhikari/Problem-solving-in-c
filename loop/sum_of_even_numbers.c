#include <stdio.h>
int main()
{
    int n,i,s=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   if(i%2==0){
      printf("%d is even number\n",i);
       s=s+i;
      }
    }
printf("The sum of all even number is %d",s);
    return 0;
}
