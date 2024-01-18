#include<stdio.h>
int main()
{ 
 float base,height,area;
 printf("Enter the base of the Triangle\n");
 scanf("%f",&base);
 printf("Enter the height of the Triangle\n");
 scanf("%f",& height);
 area=(height*base)/2;
 printf("The area of the Triangle is %.2f\n",area);
 return 0;
}
