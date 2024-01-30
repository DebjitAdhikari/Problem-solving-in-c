#include <stdio.h>
int sum(int a[],int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    return s;
}
int main()
{
    int n,i,s;
    printf("Etner the size of the arrAY\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    s=sum(a,n);
    printf("The sum of all elements = %d",s);
    return 0;
}
