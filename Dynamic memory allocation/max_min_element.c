#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a,n,i,max,min;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("Enter the element of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    max=*(a+0);
    min=*(a+0);
    for(i=1;i<n;i++)
    {
        if(max<*(a+i))
        max=*(a+i);
        else if(min>*(a+i))
        min=*(a+i);
    }
    printf("The maximum element is %d and minimum element is %d",max,min);
    return 0;
}
