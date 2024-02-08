#include <stdio.h>

int main()
{
    int start,end,m,n,nod,f,i,j,sum,remi;
    printf("Enter a range:");
    scanf("%d%d",&start,&end);
    printf("The Armstrong number between %d to %d is\n",start,end);
    for(n=start;n<=end;n++)
    {
        m=n;
        nod=0;
        while(m>0)
        {
            nod++;
            m=m/10;
        }
        m=n;
        sum=0;
        while(m>0)
        {
            remi=m%10;
            f=1;
        for(i=1;i<=nod;i++)
           {
             f=f*remi;
           }
           sum=sum+f;
           m=m/10;
        }
        if(sum==n)
        printf("%d ",sum);
    }
    return 0;
}
