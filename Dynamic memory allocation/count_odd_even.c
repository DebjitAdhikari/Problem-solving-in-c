#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a,n,i,countodd=0,counteven=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("Enter the number of elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    for(i=0;i<n;i++)
    {
        if(*(a+i)%2==0)
        {
            counteven++;
        }
        else if(*(a+i)%2==1)
        {
            countodd++;
        }
        printf("The number of even elements are %d\n The number of the odd elements are %d\n",counteven,countodd);
    }
    return 0;
}
