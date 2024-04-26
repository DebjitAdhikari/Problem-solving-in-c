#include <stdio.h>
int add(int x,int y)
{
    if(y==0)
    return 0;
    else{
        return (x+add(x,y-1));
    }
}
int main()
{
    int x,y;
    printf("Enter two numer\n");
    scanf("%d%d",&x,&y);
    printf("%d ",add(x,y));
    return 0;
}
