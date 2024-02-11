#include <stdio.h>

int main()
{
    char ch;
    printf("Enter something\n");
    ch=getchar();
    if(ch>=65&&ch<=90)
    {
        ch=ch+32;
    }
    else if(ch>=97&&ch<=122)
    {
        ch=ch-32;
    }
    printf("After updating your output is %c",ch);
    return 0;
}
