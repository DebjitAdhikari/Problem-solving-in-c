#include <stdio.h>
#include<math.h>
int main()
{
    int x,y,p;
    printf("Enter the base & power");
    scanf("%d%d",&x,&y);
    p=pow(x,y);
    printf("Power = %d",p);
    
    
    return 0;
}
