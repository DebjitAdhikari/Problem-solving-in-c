#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,*a,max=0;
    printf("Etner the size of the array\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    max=*(a+0);
    for(i=1;i<n;i++)
    {
        if(max<*(a+i))
        {
            max=*(a+i);
        }
    }
    int *freq;
    freq= (int*)malloc((max+1)*sizeof(int));
    for(i=0;i<max+1;i++)
    {
        *(freq+i)=0;
    }
    for(i=0;i<n;i++)
    {
        *freq((a+i))++;
    }
    for(i=0;i<max+1;i++)
    {
        if(*freq+i!=0)
        {
            printf("Frequency of the %d is %d\n",i,*freq+i);
        }
    }
    return 0;
}
