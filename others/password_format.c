#include <stdio.h>
#include <conio.h>
int main()
{ 
    int n,i;
    printf("Your password is consist of how many characters\n");
    scanf("%d",&n);
    char pass[n];
    printf("Enter your password\n");
    for(i=0;i<n;i++)
    {
        pass[i]=getch();
        if(i<=1)
        {
            printf("%c",pass[i]);
        }
        else
        printf("*");
    }
    printf("Your password is %s",pass);
    return 0;
}
