#include <stdio.h>

int main()
{
    int num,i=1,f=1;
    printf("Enter the num\n");
    scanf("%d",&num);
    while(i<=num){
        f=f*i;
        i++;
    }
    printf("The factorial of the num is\n%d",f);
    return 0;
}
