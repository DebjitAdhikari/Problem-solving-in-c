#include <stdio.h>

int main()
{
    int start,end,i,n,temp,count=0,remi,sum,f;
    printf("Enter the range: ");
    scanf("%d%d",&start,&end);
    printf("The Armstrong numbers from%d to %d are",start,end);
    for(n=start;n<=end;n++)
    {  temp=n;
        while(n>0)
        {
            count++;
            n=n/10;
        }
        n=temp;
        sum=0;
        f=1;
        while(n>0)
        {
            remi=n/10;
            for(i=1;i<=count;i++)
            {
                f=f*remi;
            }
            sum=sum+f;
            n=n/10;
        }
        if(sum==temp)
        {
            printf("%d",temp);
        }
    }
    return 0;
}
