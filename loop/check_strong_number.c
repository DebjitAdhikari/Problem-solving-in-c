#include <stdio.h>

int main()
{
    int num,f=1,i,remi,sum=0,temp;
    printf("Enter the num");
    scanf("%d",&num);
    temp=num;
    while(num>0){
        remi=num%10;
        for(i=1;i<=remi;i++)
        {
            if(remi%i==0)
            {
              f=f*i;
            }
        }
        num=num/10;
        sum=sum*1+f;
    }
    if(sum==temp)
    {
        printf("This number is strong number");
    }
    else{
        printf("This number is not a strong number");
    }
    return 0;
}
