#include <stdio.h>
int fun(int n, int a[], int pos)
{
    int i;
    pos--;
    for(i=pos;i<n;i++)
        a[i]=a[i+1];
    n--;
    printf("The updated array\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int n,i,pos;
    printf("Enter the size \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elemnts\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Etner the position of the value to delete\n");
    scanf("%d",&pos);
    fun(n,a,pos);
    return 0;
}
