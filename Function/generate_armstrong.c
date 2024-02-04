#include <stdio.h>
int getdigit(int a)
{
    int count=0;
    while(a>0)
    {
        count++;
        a=a/10;
    }
    return count;
}
int power(int x,int y)
{
    int p=1;
    for(int i=1;i<=y;i++)
    {
        p=p*x;
    }
    return p;
}
int isarmstrong(int num)
{
    int r,s=0,nod;
    nod=getdigit(num);
    while(num>0)
    {
        r=num%10;
        s=s+power(r,nod);
        num=num/10;
    }
    return s;
}
void armstrong(int first,int last)
{
    int i,ar;
    for(i=first;i<=last;i++)
    {
        ar=isarmstrong(i);
        if(i==ar)
        {
            printf("%d ",i);
        }
    }
}
int main()
{
    int start,end;
    printf("Enter the range\n");
    scanf("%d%d",&start,&end);
    armstrong(start,end);
    return 0;
}
