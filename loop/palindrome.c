#include <stdio.h>

int main()
{
    int num,rev=0,remi,temp;
    printf("Enter the number\n");
    scanf("%d",&num);
    temp=num;
    while(num>0){
        remi=num%10;
        rev=rev*10+remi;
        num=num/10;
    }
    if(rev==temp){
        printf("This is a palindrome number");
    }
    else{
        printf("This is not a palindrome number");
    }
    return 0;
}
