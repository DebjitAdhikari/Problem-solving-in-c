#include <stdio.h>

int main()
{
    float cel,far;
    printf("Enter the temperature in celcius\n");
    scanf("%f",&cel);
    far=(cel*9/5)+32;
    printf("The temperature in farenhite is %.3f\n",far);
    return 0;
}
