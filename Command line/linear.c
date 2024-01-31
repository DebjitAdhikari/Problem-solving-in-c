#include <stdio.h>
#include <stdlib.h>
int linearsearch(int a[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return i;
        }
    }
    return -1;
}
int main(int argc,char *argv[])
{
    int a[argc];
    for(int i=0;i<argc-1;i++)
    {
        a[i]=atoi(argv[i+1]);
    }
    int x=atoi(argv[argc-1]);
    int n=argc-2;
    int l;
    l=linearsearch(a,n,x);
    if(l!=-1)
    {
        printf("The position of the searching value is %d\n",l);
    }
    else
    {
        printf("The element is not valid\n");
    }
    return 0;
}
