#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20],s2[20];
    int n;
    printf("Enter a name\n");
    gets(s1);
    printf("Enter another name\n");
    gets(s2);
    n=strcmp(s1,s2);
    if(n==0)
    printf("Both string are same\n");
    else if(n>0)
    printf("First string is greater than the next one\n");
    else if(n<0)
    printf("Second string is greater than first one\n");
    return 0;
}
