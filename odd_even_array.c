#include <stdio.h>

int main()
{
    int n,i,o=0,e=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int a[n]; int odd[n]; int even[n];
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
          even[e]=a[i];
          e++;  
        }
        else
        {
            odd[o]=a[i];
            o++;
        }
    }
    printf("The elements of the even array are\n");
    for(i=0;i<e;i++)
    {
        printf("%d ",even[i]);
    }
    printf("\n");
    printf("The elements of the odd array are\n");
    for(i=0;i<o;i++)
    {
        printf("%d ",odd[i]);
    }
    printf("\n");
    return 0;
}
