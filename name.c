#include <stdio.h>

int main()
{
    char name[20];
    printf("Enter your name\n");
    //scanf("%s",name);
    gets(name);
    //printf("%s",name);
    puts("your name is");
    puts(name);
    return 0;
}
