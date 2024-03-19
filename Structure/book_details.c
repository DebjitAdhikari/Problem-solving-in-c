#include <stdio.h>
struct book{
    int refno;
    char name[20];
    float price;
};
int main()
{
    struct book b[15];
    int n,i;
    printf("How many books?\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the name of book %d\n",i+1);
        fflush(stdin);
        gets(b[i].name);
        printf("Enter the referal code of the book\n");
        scanf("%d",&b[i].refno);
        printf("Enter the price of the book\n");
        scanf("%f",&b[i].price);
    } 
    int code,flag=0;
    printf("Enter the referal code of the book that you wanna search\n");
    scanf("%d",&code);
    for(i=0;i<n;i++)
    {
        if(code==b[i].refno)
        {
            printf("The details of the book %d\n",i+1);
            printf("Name = %s\n",b[i].name);
            printf("Referal code = %d\n",b[i].refno);
            printf("Price = %f\n",b[i].price);
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("Book is not found\n");
    return 0;
}
