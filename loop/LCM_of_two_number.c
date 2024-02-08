#include <stdio.h>

int main()
{
    int x,y,c,remi,lcf,temp;
    printf("Enter the x\n");
    scanf("%d",&x);
    printf("Enter the y\n");
    scanf("%d",&y);
    temp=x*y;
    remi=y%x;
    while(remi>0){
    y=x;
    x=remi;
    remi=y%x;
    }
    lcf=temp/x;
    printf("lcf is %d",lcf);
    return 0;
}
