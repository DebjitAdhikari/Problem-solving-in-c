#include <stdio.h>

int main()
{
    int n,i,pos;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position of the value you want to delete");
    scanf("%d",&pos);
    pos--;
    for(i=pos;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    printf("The updated array is \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
