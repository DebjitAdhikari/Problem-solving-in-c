#include <stdio.h>
int x=10;//Global variable
void fun1()
{
    x=x+10;//
}
void fun2()
{
    int x=20;//Local variable
    x=x+10;
    printf("%d\n",x);//30
    printf("Global variable x = %d",::x);// Accesing global variable
}
int main()
{
    fun1();
    x=x+20;
    fun2();
    printf("\n x = %d",x);//x=40
    return 0;
}
