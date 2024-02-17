#include <stdio.h>
#include <string.h>
int main()
{
    char str[30];
    printf("Enter the name\n");
    //scanf("%s",&str);
    gets(str);
    int l=strlen(str);
    printf("The lenth of the string is %d",l);
    return 0;
}
