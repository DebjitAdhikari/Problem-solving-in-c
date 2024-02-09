#include <stdio.h>

int main()
{
    int x,y,i=1,pow=1;
    printf("Enter the base\n");
    scanf("%d",&x);
    printf("Enter the power\n");
    scanf("%d",&y);
    while(i<=y)
    {
        pow=pow*x;
        i++;
    }
    printf("The power of the num is %d",pow);
    return 0;
}
