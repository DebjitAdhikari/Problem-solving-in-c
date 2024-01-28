#include <stdio.h>

int main()
{
    int r,c,i,j,s;
    printf("Enter row and column of the two matrices\n");
    scanf("%d%d",&r,&c);
    int a[r][c],b[r][c],d[r][c];
    printf("Enter the elements of the 1st matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of the 2nd matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("1st matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("2nd matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           d[i][j]=a[i][j]*b[i][j];
        }
    }
    printf("Addition of the matrices\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
    return 0;
}