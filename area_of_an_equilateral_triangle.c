#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,s,area;
    printf("Enter the three angles of the triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    area= sqrt(s*(s-a)*(s=b)*(s-c));
    printf("Area = %d",area);

    return 0;
}
