#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter the number of row\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
