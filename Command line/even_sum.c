#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
    int i,s=0,n;
    n=atoi(argv[1]);
    for(i=1;i<n;i++)
    {
       s=s+i; 
    }
    printf("The sum of all even number between 1 to %d is = %d\n",n,s);
    return 0;
}
