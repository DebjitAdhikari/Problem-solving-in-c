#include <stdio.h>

int main()
{
    float cm,kilometer,meter;
    printf("Enter the a lenth in Centimeter\n");
    scanf("%f",&cm);
    kilometer=cm/100000;
    printf("Your lenth in kilometer is \n%.2fkm\n",kilometer);
    meter=cm/100;
    printf("Your lenth in meter is \n%.2fm\n",meter);
    return 0;
}
