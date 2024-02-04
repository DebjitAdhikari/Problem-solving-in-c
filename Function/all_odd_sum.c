#include <stdio.h>
void odd(int a,int b)
{
    int i=1,s=0;
    printf("The all even numbers in the given range are\n");
    for(i=a;i<=b;i++)
    {
        if(i%2==1)
        {
            printf("%d ",i);
            s=s+i;
        }
    }
    printf("\nThe sum of all odd number is %d\n",s);
}
int main()
{
    int start,end;
    printf("Enter the range\n");
    scanf("%d%d",&start,&end);
    odd(start,end);
    return 0;
}
