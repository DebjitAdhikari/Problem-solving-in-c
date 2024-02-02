#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a,n,i,s=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    for(i=0;i<n;i++)
    {
        s=s+*(a+i);
    }
    printf("The sum of all elements is %d\n",s);
    return 0;
}
