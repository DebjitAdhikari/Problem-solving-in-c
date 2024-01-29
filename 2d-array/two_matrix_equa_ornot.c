#include <stdio.h>

int main()
{
    int i,j,r,c;
    printf("Enter the row and the column of both matrix\n");
    scanf("%d%d",&r,&c);
    int a[r][c],b[r][c];
    printf("Enter the elements and the 1st matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of the 2nd array\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int s1=0,s2=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            s1=s1+a[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            s2=s2+b[i][j];
        }
    }
    if((s1-s2)>=0)
    {
        printf("1st matrix is large\n");
    }
    else if((s1-s2)<=0)
    {
        printf("2nd matrix is large\n");
    }
    else
    printf("Both matrices are equal\n");
    return 0;
}
