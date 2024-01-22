#include <stdio.h>

int main()
{
    int unit;
    float amount,total;
    printf("Enter the amount\n");
    scanf("%d",&unit);
    if(unit<=50)
    {
        amount=unit*0.50;
    }
    else if( unit>50 && unit<=150)
    {
        amount=50*0.50+(unit-50)*0.75;
    }
    else if( unit>150 && unit<=250)
    {
        amount=50*0.50+100*0.75+(unit-150)*1.20;
    }
    else if(unit>250) {
        amount=50*0.50+100*0.75+150*1.20+unit*1.50;
    }
total=amount+amount*20/100;
printf("Total amount of bill %f",total);
    return 0;
}
