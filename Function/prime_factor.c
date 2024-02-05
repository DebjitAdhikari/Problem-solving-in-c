#include <stdio.h>
void fact(int a)
{
    int i, flag=0, j;
    printf("The prime factors of %d \n", a);
    for (i = 2; i <= a / 2; i++)
    {
        flag==0;
        if (a % i == 0)
        {
            for (j = 2; j*j <= i; j++)
            {
                if (i % j == 0)
                {
                    flag==1;
                    break;
                }
            }
            if(flag==0)
            {
            printf("%d ",i);
            }
        }
    }
}
int main()
{
    int n;
    printf("Eneter then number\n");
    scanf("%d", &n);
    fact(n);
    return 0;
}