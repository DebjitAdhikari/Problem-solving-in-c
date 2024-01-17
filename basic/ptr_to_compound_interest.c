#include <stdio.h>
#include<math.h>
int main()
{
    float p,r,t,i;
    printf("Enter p t r\n");
    scanf("%d%d%d",&p,&t,&r);
    i=p*pow((1+r/100),t);
    printf("The compound interest is %f",i);
    return 0;
}
