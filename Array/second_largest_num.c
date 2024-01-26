#include <stdio.h>

int main()
{
   int max1,max2,n,i;
   printf("Enter the size of the array\n");
   scanf("%d",&n);
   int a[n];
   printf("Enter %d numbers\n",n);
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   if(a[0]>a[1])
   {
    max1=a[0];
    max2=a[1];
   }
   else if(a[0]<a[1])
   {
    max1=a[1];
    max2=a[0];
   }
   for(i=2;i<n;i++)
   {
    if(max1<a[i])
    {
        max2=max1;
        max1=a[i];
    }
    else if(max2<a[i])
    {
        max2=a[i];
    }
   }
    printf("The second largest number of the array is %d",max2);
    return 0;
}
