#include <stdio.h>
#include <stdlib.h>
int gcdcal(int x,int y)
{
    int r;
    r=y%x;
    while(r>0)
    {
        y=x;
        x=r;
        r=y%x;
    }
    return x;
}
int lcmcal(int total,int gcd)
{
    int lcm;
    lcm=total/gcd;
    return lcm;
}
int main(int argc,char *argv[])
{
    int x,y,temp,gcd,lcm;
    x=atoi(argv[1]);
    y=atoi(argv[2]);
    temp=x*y;
    gcd=gcdcal(x,y);
    lcm=lcmcal(temp,gcd);
    printf("The gcd of two numbers %d and lcm %d\n",gcd,lcm);

    return 0;
}
