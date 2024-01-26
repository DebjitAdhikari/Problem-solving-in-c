#include <stdio.h>

int main()
{
    int i,j,n,sum=0;
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
        sum=sum+a[i];
    }
    printf("The sum of all array elements is %d\n",sum);    
    return 0;
}
