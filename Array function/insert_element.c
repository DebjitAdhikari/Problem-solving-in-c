#include <stdio.h>
void fun(int a[],int n,int pos,int val)
{
    int i;
    pos--;
    for(i=n;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=val;
    n++;
    printf("The updated array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}
int main()
{
    int i,n,pos,val;
    printf("Enter the size\n");
    scanf("%d",&n);
    int a[n];
    printf("Etner the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position and the value you wanna enter\n");
    scanf("%d%d",&pos,&val);
    fun(a,n,pos,val);
    return 0;
}
