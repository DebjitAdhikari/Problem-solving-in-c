h#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
    int x,y,sum;
    x=atoi(argv[1]);
    y=atoi(argv[2]);
    sum=x+y;
    printf("Sum of the numbers = %d\n",sum);
    return 0;
}
