#include<stdio.h>
int main() {
	int number, remainder, count, digit,m;
	printf("\n Enter a number:");
	scanf("%d",&number);
	m = number;
	for(int digit = 0; digit<=9; digit++){
		count=0;
		number = m;
		while(number>0){
			remainder = number%10;
			if(remainder == digit){
				count = count + 1;
			}
			number = number/10;
		}
		if(count!=0)
			printf("\n Frequency of %d is %d",digit,count);
	}
	return 0;
}
