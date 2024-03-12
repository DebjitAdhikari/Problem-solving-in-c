i#include <stdio.h>
#define R 10
#define C 10
void enter(int a[][C],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("[%d][%d]:- ",i,j);
            scanf("%d",&a[i][j]);
        }
    }  
}
void result(int a[][C],int r,int c)
{
    int i,j;
    
}
int main()
{
    int r,c;
    int a[R][C],b[R][C],d[R][C];
    printf("Enter row and column of the two matrices\n");
    scanf("%d%d",&r,&c);
    printf("\nEnter the elements of 1st Matrix:-\n");
    enter(a,r,c);
    printf("\nEnter the elements of 2nd Matrix:-\n");
    enter(b,r,c);
    return 0;
}
