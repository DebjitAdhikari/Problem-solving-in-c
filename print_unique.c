#include <stdio.h>

int main()
{
    int n,i,max;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
max=a[0];
for(i=1;i<n;i++)
{
    if(a[i]>max)
    {
        max=a[i];
    }
}
int new[max+1];
for(i=0;i<max+1;i++)
{
    new[i]=0;
}
for(i=0;i<n;i++)
{
    new[a[i]]++;
}
printf("The all unique elements are\n");
for(i=0;i<max+1;i++)
{
    if(new[i]==1)
    printf("%d ",i);
}

    return 0;
}