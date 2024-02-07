#include <stdio.h>

int main()
{
    int num,i,flag=0,d;
    printf("Enter the number\n");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++)
    {
      if(num%i==0)
      {
        for(d=2;d*d<=i;d++)
        {
          if(i%d==0)
          {
            flag=1;
            break;
          }
        }
        if(flag==0){
        printf("Prime factor is %d\n",i);
      }
      }
      
    }
    return 0;
}
