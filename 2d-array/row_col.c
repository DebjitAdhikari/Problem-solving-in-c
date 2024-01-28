#include <stdio.h>
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
void addrow(int a[][C],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        int s=0;
        for(int j=0;j<c;j++)
        {
            s=s+a[i][j];
        }
        printf("\nSum of %d row is:- %d\n",i+1,s);
    }

}
void addcol(int a[][C],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        int s=0;
        for(int j=0;j<c;j++)
        {
            s=s+a[j][i];
        }
        printf("\nSum of %d column is:- %d\n",i+1,s);
    }

}
int main()
{
    int r,c,i,j,s=0;
    int a[R][C];
    printf("Enter the row and column\n");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of 1st Matrix:- \n");
    enter(a,r,c);
    addrow(a,r,c);
    addcol(a,r,c);
    return 0;
}
