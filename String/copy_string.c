#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20],s2[20];
    printf("Enter the input of the string\n");
    gets(s1);
    strcpy(s2,s1);
    printf("The output of the another string\n");
    puts(s2);
    return 0;
}
