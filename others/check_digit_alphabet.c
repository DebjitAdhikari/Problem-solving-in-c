#include <stdio.h>

int main()
{
    char in;
    printf("Enter something\n");
    //gets(in);
    in=getch();
    //if(in>=65 && in<=90 || in>=97 && in<=122)
    if(in>='a'&& in<='z'||in>='A' && in<='Z')
    {
        printf("%c is a alphabet\n",in);
    }
    else if(in>=48 && in<=57)
    //(in>=0 && in<=9)
    {
        printf("%c is a digit\n",in);
    }
    else
    {
        printf("%c is a special character\n");
    }
    return 0;
}
