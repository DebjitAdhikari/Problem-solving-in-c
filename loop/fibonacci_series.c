#include <stdio.h>

int main()
{
    int t,t1=0,t2=1,i,num;
    printf("Enter the number");
    scanf("%d",&num);
    if(num==0){
        printf("Error");
    }
    else if(num==1){
        printf("0");
    }
    else if(num>1)
    {
        printf("%d %d",t1,t2);
        for(i=3;i<=num;i++)
        {
            t=t1+t2;
            printf(" %d",t);
            t1=t2;
            t2=t;
        }

    }
    return 0;
}
