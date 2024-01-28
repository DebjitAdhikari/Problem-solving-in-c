#include <stdio.h>

int main()
{
    int r,c,i,j,s=0;
    printf("Enter the row and the column\n");
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("Enter the element of the matrix\n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    printf("The matrix is\n");
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
        if(i==j)
            {
               s=s+a[i][j];
            }
        }
    }
    printf("The sum of the diagonal matrix elements = %d",s);
    return 0;
}
