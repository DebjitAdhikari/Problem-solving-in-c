#include <stdio.h>
void print(int n)
{
    if(n==0)
    return;
    else
    print(n-1);
    printf("%d ",n);
}
int main()
{
    int num;
    printf("Enter the range from 1\n");
    scanf("%d",&num);
    print(num);
    return 0;
}
