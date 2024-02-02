#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,*a;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    printf("The negative elements of the array\n");
    for(i=0;i<n;i++)
    {
        if(*(a+i)<0)
        printf("%d ",*(a+i));
    }
    return 0;
}
