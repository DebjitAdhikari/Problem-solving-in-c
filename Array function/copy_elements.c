#include <stdio.h>
void fun(int a[],int n)
{
    int i,b[n];
    for(i=0;i<n;i++)
        b[i]=a[i];
    printf("Elements of the another array\n");
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
}
int main()
{
    int n,i;
    printf("Enter the size\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    fun(a,n);
    return 0;
}
