#include <stdio.h>

int main()
{
    int x,y,c,remi;
    printf("Enter the x\n");
    scanf("%d",&x);
    printf("Enter the y\n");
    scanf("%d",&y);
    remi=y%x;
    while(remi>0){
    y=x;
    x=remi;
    remi=y%x;
    }
    printf("hcf is %d",x);
    return 0;
}
