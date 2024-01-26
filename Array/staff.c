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
        if(max<a[i])
        {
            max=a[i];
        }
    }
    int freq[max+1];
    for(i=0;i<max+1;i++)
    {
        freq[i]=0;
    }
    for(i=0;i<n;i++)
    {
        freq[a[i]]++;
    }
    for(i=0;i<max+1;i++)
    {
        if(freq[i]!=0)
        {
            printf("Frequency of the %d is %d\n",i,freq[i]);
        }
    }
    return 0;
}
