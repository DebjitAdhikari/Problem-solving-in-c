#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1,n2,i,j,*a,*b,*c;
    printf("Enter the size of the 1st array\n");
    scanf("%d",&n1);
    a=(int*)malloc(n1*sizeof(int));
    printf("Enter the elements of the 1st array\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",a+i);
    }
    printf("Enter the size of the 2nd array\n");
    scanf("%d",&n2);
    b=(int*)malloc(n2*sizeof(int));
    printf("Enter the elements of the 2nd array\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",b+i);
    }
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
    printf("The elements of the 3rd array \n");
    for(i=0;i<n1+n2;i++)
    {
        printf("%d ",*c+i);
    }
    
    return 0;
}
