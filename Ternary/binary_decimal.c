#include <stdio.h>
#include<math.h>
int main()
{
    int i=0,w=1,num,r,s=0;
    printf("Enter the binary\n");
    scanf("%d",&num);
    while(num>0)
    {
        
        r=num%10;
        s=s+r*pow(2,i);
        //w=w*2;
        i++;
        num=num/10;
    }
    printf("Decimal num = %d\n",s);
    return 0;
}
