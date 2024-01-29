#include <stdio.h>
void fun(int a[],int n)
{
    int i,co=0,ce=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            ce++;
        }
        else 
        {
            co++;
        }
    }
    printf("Even elements = %d\nOdd elements = %d\n",ce,co);
}
int main()
{
    int n,i;
    printf("ETner the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    fun(a,n);
    return 0;
}
