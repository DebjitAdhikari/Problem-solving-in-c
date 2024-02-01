#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a,n,i,pos;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    printf("Enter the position of the element you wanna delete\n");
    scanf("%d",&pos);
    
    for(i=pos;i<n;i++)
    {
        *(a+i)=*(a+(i+1));
    }
    n--;
    printf("The updated elements of the array are\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }
    return 0;
} 
