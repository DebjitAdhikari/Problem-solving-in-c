#include <stdio.h>
int main()
{
    float cel,far;
    printf("Enter the temperature in farenhite\n");
    scanf("%f",&far);
    cel=(far-32)*5/9;
    printf("The temperature in celcius is %.3f\n",cel);
    return 0;
}
