#include<stdio.h>
int main() {
	int n;
	printf("\n Enter a number:"); 
	scanf("%d",&n);
	if(n > 0) {
		printf("\n %d is a positive number",n);
	}
	else if(n < 0) {
		printf("\n %d is a negative number",n);
	}
	else
	{
		printf("\n %d is zero",n);
	}
	return 0;
}
