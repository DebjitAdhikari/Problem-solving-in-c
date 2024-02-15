#include <stdio.h>
#include <string.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char s1[20],s2[20];
    printf("Enter your first name\n");
    gets(s1);
    printf("Enter your last name\n");
    gets(s2);
    strcat(s1," ");
    strcat(s1,s2);
    printf("\nYour full name is %s",s1);
   //puts(s1);
    return 0;
}
