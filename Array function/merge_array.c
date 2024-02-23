#include <stdio.h>
void fun(int a[],int b[],int n,int n1)
{
    int j,i;
    int c[n+n1];
    for(i=0;i<n;i++)
        c[i]=a[i];
    for(j=0;j<n1;j++)
    {
        c[i]=b[j];
        i++;
    }
    printf("The elements of the another array\n");
    for(i=0;i<n+n1;i++)
        printf("%d ",c[i]);

}
int main()
{
    int n,n1,i;
    printf("Enter the size of 1st array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the size of 2nd array\n");
    scanf("%d",&n1);
    int b[n1];
    printf("Enter the elements of the second array\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&b[i]);
    }
    fun(a,b,n,n1);
    return 0;
}
