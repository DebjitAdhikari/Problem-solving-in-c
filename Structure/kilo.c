#include <stdio.h>
typedef struct distance{
    int kilo,m,cm;
}dtype;
dtype input()
{
    dtype d;
    printf("Enter distance\n");
    printf("KM - \n");
    scanf("%d",&d.kilo);
    printf("METER - \n");
    scanf("%d",&d.m);
    printf("CM - \n");
    scanf("%d",&d.cm);
    return d;
}
dtype add(dtype d1,dtype d2)
{
     dtype d3;
     d3.cm=(d1.cm+d2.cm)%100;
     d3.m=(d1.m+d2.m)%1000+(d1.cm+d2.cm)/100;
     d3.kilo=(d1.kilo+d2.kilo)+(d1.m+d2.m+(d1.cm+d2.cm)/100)/1000;
     return d3;
}
void print(dtype d3)
{
    printf("Total distance\n");
    printf("KM - %d\n",d3.kilo);
    printf("METER - %d\n",d3.m);
    printf("CM - %d\n",d3.cm);
}
int main()
{

    dtype d1,d2,d3;
    d1=input();
    d2=input();
    d3=add(d1,d2);
    print(d3);
    return 0;
}
