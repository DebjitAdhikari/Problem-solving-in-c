#include <stdio.h>
void swap1(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("Aftercall by value x=%d  y=%d\n",a,b);
}
void swap2(int *a,int *b)
{
    int *t;
    *t=*a;
    *a=*b;
    *b=*t;
    printf("After call by reference x=%d  y=%d\n",*a,*b);
}
int main()
{
    int x,y;
    printf("Enter the value of x and y\n");
    scanf("%d%d",&x,&y);
    swap1(x,y);
    printf("In the main function x = %d, y = %d\n",x,y);
    swap2(&x,&y);
    printf("In the main function x=%d, y=%d\n",x,y);
    return 0;
}
