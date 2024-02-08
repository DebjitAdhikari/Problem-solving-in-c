#include <stdio.h>

int main()
{
    int num,i;
    printf("Enter a num\n");
    scanf("%d",&num);
    while(i<=num)
    {
        printf("%d*%d=%d\n",num,i,num*i);
        i++;
    }
    return 0;
}
