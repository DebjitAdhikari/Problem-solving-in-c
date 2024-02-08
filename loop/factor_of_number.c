#include <stdio.h>

int main()
{
    int num,i=1;
    printf("Enter the num");
    scanf("%d",&num);
    while(i<=num/2)
    {
        if(num%i==0)
        {
            printf("factor is %d\n",i);
        }
     i++;
    }
    return 0;
}
