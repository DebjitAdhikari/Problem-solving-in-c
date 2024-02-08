# include<stdio.h>
int main()
{
    int n1,n2,i,j;
    printf("Enter the size of the array\n");
    scanf("%d",&n1);
    int a[n1];
    printf("Enter the all elements of the array\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the size of the second array\n");
    scanf("%d",&n2);
    int b[n2];
    printf("Enter the elements of the array\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    int c[n1+n2];
    for(i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    for(j=0;j<n2;j++)
    {
        c[i]=b[j];
        i++;
    }
    printf("The elements of the third array are\n");
    for(i=0;i<n1+n2;i++)
    {
        printf("%d ",c[i]);
    }

}