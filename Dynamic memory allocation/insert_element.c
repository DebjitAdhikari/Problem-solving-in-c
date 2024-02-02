#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a,pos,val,n,i;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("Enter the number of the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    printf("Enter the position and the value you wanna enter\n");
    scanf("%d%d",&pos,&val);
    pos--;
    for(i=n;i>=pos;i--)
    {
        *(a+(i+1))=*(a+i);
    }
    *(a+pos)=val;
    n++;
    printf("The updated array elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }

    return 0;
}
