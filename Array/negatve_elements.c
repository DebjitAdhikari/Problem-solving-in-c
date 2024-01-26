#include <stdio.h>

int main()
{
    int i,j,n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers\n",n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    } 
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        printf("%d ",a[i]);
    }
    return 0;
}
