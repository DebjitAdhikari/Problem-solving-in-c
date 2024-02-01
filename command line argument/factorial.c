#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[])
{ 
    int i,n=atoi(argv[1]),f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("Factorial = %d",f);
    
    return 0;
}
