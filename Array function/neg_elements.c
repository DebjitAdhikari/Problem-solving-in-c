#include <stdio.h>
void neg(int b[],int num)
{
    int i;
    printf("The negative elements of the array\n");
    for(i=0;i<num;i++)
    {
        if(b[i]<0)
        {
            printf("%d ",b[i]);
        }
    }
}
int main()
{
    int n,i;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    neg(a,n);
    return 0;
}
