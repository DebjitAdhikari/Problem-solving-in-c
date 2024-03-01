#include <stdio.h>

int main()
{
    int i,j,r,c,s,d;
    printf("Enter the row and column\n");
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("Enter the elements of the matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
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
    printf("Sum of row elements\n");
    for(i=0;i<r;i++)
    {   
        s=0;
        for(j=0;j<c;j++)
        {
           s=s+a[i][j];
        }
        printf("%d\n",s);
    }
    printf("Sum of column elements\n");
    for(j=0;j<c;j++)
    {
        s=0;
        for(i=0;i<r;i++)
        {
            s=s+a[i][j];
        }
        printf("%d ",s);
    }
    return 0;
}
