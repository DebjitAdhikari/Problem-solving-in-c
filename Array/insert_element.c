#include <stdio.h>

int main()
{
    int n,size,i,pos,value;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int a[size];
    printf("How many numbers you want to enter? < %d\n",size);
    scanf("%d",&n);
    printf("Enter %d elements of the array\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position and the number you want to insert\n");
    scanf("%d%d",&pos,&value);
    pos--;
    if(n<size)
    {
        for(i=n;i>pos;i--)
        {
            a[i]=a[i-1];
        }
        a[pos]=value;
        n++;
        printf("The updated element of the array is\n");
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
    }
    else 
       {
        printf("Insertation error\n");
       }
    return 0;
}
