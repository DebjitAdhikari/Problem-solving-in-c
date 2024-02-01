#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,*a,*b;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    b=(int*)malloc(n*sizeof(int));
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    for(i=0;i<n;i++)
    {
        *(b+i)=*(a+i);
    }
    printf("The elements of the other array are\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(b+i));
    }
    return 0;
}
/**/
