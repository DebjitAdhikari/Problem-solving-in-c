#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a,n,i,max1,max2;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    if(*(a+0)>*(a+1))
    {
        max1=*(a+0);
        max2=*(a+1);
    }
    else if(*(a+0)<*(a+1))
    {
        max1=*(a+1);
        max2=*(a+0);
    }
    for(i=1;i<n;i++)
    {
        if(max1<*(a+i))
        {
            max2=max1;
            max1=*(a+i);
        }
        else if(max1>*(a+i) && max2<*(a+i))
        {
            max2=*(a+i);
        }
    }
     printf("The secound maximum element of the array is %d",max2);
    return 0;
}
