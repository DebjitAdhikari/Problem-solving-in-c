#include <stdio.h>

int main()
{
    int unit;
    float amount,total;
    printf("Enter the unit\n");
    scanf("%d",&unit);
    if(unit>200){
        total=unit*1.20;
    }
    else if(unit>=200&&unit<400){
        total=199*1.20+(unit-199)*1.50;
    }
    else if(unit>=400&&unit<600){
        amount=199*1.20+199*1.50+(unit-399)*1.80;
        total=amount+amount*15/100;
    }
    else if(unit>600){
        amount=199*1.20+199*1.50+199*1.80+(unit-599)*2.00;
         total=amount+amount*15/100;
    }
    printf("Total amount of your bill is \n%f",total);
    return 0;
}
