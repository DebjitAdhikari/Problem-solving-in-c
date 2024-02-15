#include <stdio.h>
#include <string.h>
int main()
{
    char s[10];
    printf("Enter the name\n");
    gets(s);
    strrev(s);
    printf("The reverse name is %s",s);
    return 0;
    
}
