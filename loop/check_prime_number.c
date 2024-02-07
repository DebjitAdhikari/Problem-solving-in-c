#include <stdio.h>

int main()
{
    int count=0,num,i=1;
    printf("Enter the num\n");
    scanf("%d",&num);
    while(i<=num){
        if(num%i==0){
            count++;
        }
    i++;
    }
    if(count==2){
        printf("The number is a prime number");
    }
    else{
        printf("The number is not a prime number");
    }
    return 0;
}
