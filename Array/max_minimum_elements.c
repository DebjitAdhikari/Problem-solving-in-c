#include <stdio.h>

int main()
{
    int i,n,max,min;
    printf("Enter the size of the araay\n");
    scanf("%d",&n);
    int a[i];
    printf("Enter the elements of the araay\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
        max=a[i];
        }
    }
    printf("The maximum number of the array is %d\n",max);
    for(i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("The minimum number of the array is %d",min);
    return 0;
}
