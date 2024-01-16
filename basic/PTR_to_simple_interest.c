#include <stdio.h>

int main()
{
    int p,t;
    float r,s;
    printf("Enter the principle\n");
    scanf("%d",&p);
    printf("Enter the time\n");
    scanf("%d",&t);
    printf("Enter the rate\n");
    scanf("%f",&r);
    s=(p*t*r)/100;
    printf("The simple interest is %f\n",s);
    return 0;
}
