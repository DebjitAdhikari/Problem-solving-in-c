#include <stdlib.h>
#include <stdio.h>
void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
}
void frequency(int a[],int n)
{
    int max,i;
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
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
        if(freq[i]>0)
        {
            printf("Frequency of %d is %d times\n",i,freq[i]);
        }
    }
}
int main(int argc,char *argv[])
{
    int a[argc];
    for(int i=0;i<argc;i++)
    {
        a[i]=atoi(argv[i+1]);
    }
    printarray(a,argc-1);
    frequency(a,argc-1);
    return 0;
}
