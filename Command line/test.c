#include <stdio.h>

int main(int argc,char *argv[])
{
    printf("\n numer of arguments - %d",argc);
    printf("\n arguments are ");
    for(int i =0;i<argc;i++)
    {
        printf("%s ",argv[i]);
    }
    return 0;
}
