#include <stdio.h>
int x=10;
void fun1()
{
    x=x+10;
}
void fun2()
{
    int x=20;
    x=x+10;
    printf("%d",x);
    printf("Global variable x = %d",::x);
}
int main()
{
    fun1();
    x=x+20;
    fun2();
    printf("\n x = %d",x);
    return 0;
}
