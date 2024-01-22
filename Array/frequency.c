#include <stdio.h>

int main()
{
    int max,n,i;
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
        if(max<a[i])
        {
            max=a[i];
        }
        
    }
    int frq[max+1];
    for(i=0;i<max+1;i++)
    {
        frq[i]=0;
    }
    for(i=0;i<n;i++)
    {
        frq[a[i]]++;
    }
    for(i=0;i<max+1;i++)
    {
        if(frq[i]!=0)
        {
            printf("The frequency of %d in the array is %d times\n",i,frq[i]);
        }
    }

    return 0;
}
