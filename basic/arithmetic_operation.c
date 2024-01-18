#include <stdio.h>
int main()
{
    float num1,num2,sum,sub,multi,div;
    printf("Enter the first number\n");
    scanf("%f",&num1);
    printf("Enter the second number\n");
    scanf("%f",&num2);
    sum = num1+num2;
    printf("The sum of two number is \n%.2f",sum);
    sub = num1-num2;
    printf("\nThe sub of two number is \n%.2f",sub);
    multi = num1*num2;
    printf("\nThe multiplication of two number is \n%.2f",multi);
    div = num1/num2;
    printf("\nThe division of two number is \n%.2f",div);
    return 0;
}
