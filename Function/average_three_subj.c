#include <stdio.h>
int average(int sub1,int sub2,int sub3)
{
    int a;
    a=(sub1+sub2+sub3)/3;
    return a;
}
int main()
{
    int sub1,sub2,sub3,avg;
    printf("Enter the number of three subjects\n");
    scanf("%d%d%d",&sub1,&sub2,&sub3);
    avg=average(sub1,sub2,sub3);
    printf("The average is %d\n",avg);
    return 0;
}
