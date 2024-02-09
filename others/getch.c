#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    
    char password;
    printf("Enter the password\n");
    password=getch();
    //gets(password);
    printf("*");
    printf("\nYour input is %c",password);
    return 0;
}
