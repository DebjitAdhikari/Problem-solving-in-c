#include <stdio.h>
void frequency(int *a,int n)
{
    int max,i;
    max=a[0];
    for(i=0;i<n;i++)
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
    //int freq[max+1]={0};
    for(i=0;i<n;i++)
    {
        freq[a[i]]++;
    }
    for(i=0;i<max+1;i++)
    {
        if(freq[i]!=0)
        {
            printf("Frequency of %d is %d\n",i,freq[i]);
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
    frequency(a,n);
    return 0;
}
