#include <stdio.h>
b
int main()
{
    int r,c,i,j,s=0;
    printf("Enter the row and column\n");
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
            s=s+a[i][j];
        }
        printf("\n");
    }
    printf("The sum of all array elements = %d",s);
    return 0;
}
