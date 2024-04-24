#include <stdio.h>

int main()
{
    int i,n,l,h,pos,val,m;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elemets of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element you wanna serch\n");
    scanf("%d",&val);
    l=0,h=n-1;
    while(l<=h)
    {
        m=l+h/2;
        if(a[m]==val)
        {
            pos=m+1;
            break;
        }
        else if(a[m]>val)
        {
            l=m-1;
            h=m+1;
        }
        else if(a[m]<val)
        {
            l=m+1;
            h=m-1;
        }
    }
    printf("The position of your value %d\n",pos);
    return 0;
}
