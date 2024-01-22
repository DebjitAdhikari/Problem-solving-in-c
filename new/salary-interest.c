#include <stdio.h>
#include<math.h>
int main()
{
    int sal,hra,da,gross;
    printf("Enter total income\n");
    scanf("%d",&sal);
    if(sal<=10000){
   hra=sal*20/100;
   da=sal*80/100;
    }
    else if(sal>10000&& sal<=20000){
        hra=sal*25/100;
   da=sal*90/100;
    }
    else if(sal>20000){
        hra=sal*30/100;
   da=sal*95/100;
    }
    gross=sal+hra+da;
    printf("Gross salary is %d",gross);
    
    return 0;
}
