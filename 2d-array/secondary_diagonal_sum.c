#include <stdio.h>

int main()
{
    int i,j,s=0,r,c;
    printf("Etner the row and sum\n");
    scanf("%d%d",&r,&c);
    int a[i][j];
    printf("Enter the elements of the matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i+j==r-1)
            {
                s=s+a[i][j];
            }
        }
    }
    printf("The sum of secondary diagonal elements = %d\n",s);
    return 0;
}
