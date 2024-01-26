#include <stdio.h>

int main()
{
    int pos=-1,i,j,n,el;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element you wanna search\n");
    scanf("%d",&el);
    for(i=0;i<n;i++)
    {
        if(a[i]==el)
        {
            pos=i;
            pos++;
            break;
        }
    }
    if(pos>0)
    printf("The position of the element in the array is %d\n",pos);
    else
    printf("This element is not available in the array\n");
    return 0;
}
