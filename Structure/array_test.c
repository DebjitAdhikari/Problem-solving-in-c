#include <stdio.h>
int input()
{
    int b[5];
    printf("Enter 5 number\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    return b;
}
int main()
{
    int *a;
    a=input();
    printf("The elements\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",*(a+i));
    }
    return 0;
}
