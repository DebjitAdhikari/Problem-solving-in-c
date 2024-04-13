h#include <stdio.h>
#include <stdlib.h>
void printarray(int a[],int n)
{
    printf("Elements of the array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
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
    return 0;
}
