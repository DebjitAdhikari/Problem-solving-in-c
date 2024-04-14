u#include <stdio.h>
#include <stdlib.h>
int facto(int n)
{
    int a=1;
for(int i=1;i<=n;i++)
    {
        a=a*i;
    } 
    return a;
}
int main(int argc,char *argv[])
{
    int a,n=atoi(argv[1]);
    a=facto(n);
    printf("Factoril of the number %d\n",a); 
    return 0;
}
