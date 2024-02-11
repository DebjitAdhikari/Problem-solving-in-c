#include <stdio.h>

int main()
{
    int i;
    char password[5];
    printf("Etner the password\n");
    for(i=0;i<5;i++)
    {
        password[i]=getch();
        printf("*");
    }
    printf("\nYour password is %s",password);
    return 0;
}
