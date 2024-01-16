#include<stdio.h>
int main()
{ 
  int a,b,c,d,e,total;
   float avg,per;
printf("Enter the number of Bangla\n");
scanf("%d",&a);
printf("Enter the number of English\n");
scanf("%d",&b);
printf("Enter the number of Chemistry\n");
scanf("%d",&c);
printf("Enter the number of Math\n");
scanf("%d",&d);
printf("Enter the number of Biology\n");
scanf("%d",&e);

total=a+b+c+d+e;
per=(total/500)*100;
printf("Your total number is %d\n",total);
printf("Your percentage of number is  is %.2f\n",per);


      return 0;
}