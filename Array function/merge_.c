#include <stdio.h>
#include <stdlib.h>
void merge(int,int,int,int);
int main()
{
    int n1,n2,*a,*b,i;
    printf("ENter the size of the array\n");
    scanf("%d",&n1);
    a=(int*)malloc(n1*sizeof(int));
    printf("ENrer the elements\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",(a+i));
    }
    printf("ENter the size of the second array\n");
    scanf("%d",&n2);
    printf("Enter the elements of the array\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",(b+i));
    }
    merge(a,b,n1,n2);
    return 0;
}
void merge(int *a,int *b,int n1,int n2)
{
    int *c,i,j;
    c=(int*)malloc((n1+n2)*sizeof(int));
    for(i=0;i<n1;i++)
    {
        *(c+i)=*(a+i);
    }
    for(j=0;j<n2;j++)
    {
        *(c+i)=*(b+j);
        i++;
    }
    printf("THe ELEMENTS OF THE ARRAY IS \n");
    for(i=0;i<n1+n2;i++)
    {
        printf("%d ",*(c+i));
    }
}