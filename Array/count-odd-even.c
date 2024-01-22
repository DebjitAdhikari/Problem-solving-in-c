#include <stdio.h>
int main()
{
    int i,n,odd,even;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else if(a[i]%2==1)
        {
            odd++;
        }
    }
    printf("In this array here is %d odd numbers and %d even numbers\n",odd,even);
    return 0;
}
