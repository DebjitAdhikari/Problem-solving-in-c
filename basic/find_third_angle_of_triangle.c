#include<stdio.h>
int main()
{ float ang1,ang2,ang3;
printf("Enter first angle of the triangle\n");
scanf("%f",&ang1);
printf("Enter second angle of the triangle\n");
scanf("%f",&ang2);
ang3= 180-(ang1+ang2);
printf("The third angle of the triangle is\n%.2f",ang3);
return 0;
}