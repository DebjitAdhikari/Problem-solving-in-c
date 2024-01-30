#include <stdio.h>
void fun(int a[],int n)
{
    int i,max1,max2;
    if(a[0]>a[1])
    {
        max1=a[0];
        max2=a[1];
    }
    else if (a[0]<a[1])
    {
        max1=a[1];
        max2=a[0];
    }
    for(i=2;i<n;i++)
    {
        if(max1<a[i]&&max2<a[i])
        {
            max2=max1;
            max1=a[i];
        }
        else if(max1>a[i]&&max2<a[i])
        {
            max2=a[i];
        }
    }
    printf("2nd largest num = %d",max2);
}
int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    fun(a,n);
    return 0;
}
