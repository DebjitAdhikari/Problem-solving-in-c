#include <stdio.h>
int main()
{
    int i,n,j;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    int a[i],b[i];
    printf("Enter the element of the array\n");
    for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
    b[i]=a[i];
   } 
   printf("The element of another array is\n");
   for(i=0;i<n;i++)
   {
    printf("%d ",b[i]);
   }
    return 0;
}
