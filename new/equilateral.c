#include<stdio.h>
int main (){
	int a, b, c ;
	printf("\n enter the three sides of the triangle");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c)
		printf("\n it is a equilateral triangle");
	else if (a==b||b==c||c==a)
		printf("\n it is a isosceles triangle");
	else
		printf("\n it is a scalene triangle");

	return 0;
}
