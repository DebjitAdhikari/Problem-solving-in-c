#include<stdio.h>
#include<math.h>
int main() {
	float a,b,c,d,root1,root2;
	printf("\n Enter three coefficients:");
	scanf("%f%f%f",&a,&b,&c);
	d = b*b - 4*a*c;
	if(d==0){
		root1 = -b/(2*a);
		printf("\n Real & equal roots are %f and %f",root1,root1);
	}
	else if(d>0){
		root1 = (-b + sqrt(d))/(2*a);
		root2 = (-b - sqrt(d))/(2*a);
		printf("\n Real & unequal roots are %f and %f",root1,root2);
	}
	else
		printf("\n Roots are imaginary");
	return 0;
}
