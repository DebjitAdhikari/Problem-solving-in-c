#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct bo{
    int bookno,price;
    char publisher[20],title[20],author[20];
};
void input(struct bo b[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the details of book %d\n",i+1);
        printf("Title - ");
        fflush(stdin);
        gets(b[i].title);
        printf("\nBook no - ");
        scanf("%d",&b[i].bookno);
        printf("\nPrice - ");
        scanf("%d",&b[i].price);
        printf("\nAuthor - ");
        fflush(stdin);
        gets(b[i].author);
        printf("\nPublisher - ");
        fflush(stdin);
        gets(b[i].publisher);
    }
}
void display(struct bo b[],int i)
{
    printf("_________________\n");
    printf("Details of the book\n");
    printf("Title - %s\n",b[i].title);
    printf("Author - %s\n",b[i].author);
    printf("Publisher - %s\n",b[i].publisher);
    printf("Book no - %d\n",b[i].bookno);
    printf("Price - %d\n",b[i].price);
}
void pricedisplay(struct bo b[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(b[i].price>=200||b[i].price<=500)
        {
            display(b,i);
        }
    }
}
void nodisplay(struct bo b[],int n,int no)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(b[i].bookno==no)
        {
            display(b,i);
        }
    }
}
void titledisplay(struct bo b[],int n,char ttl[])
{
    int i;
    for(i=0;i<n;i++)
    {
        if(strcmp(b[i].title,ttl)==0)
        {
            display(b,i);
        }
    }
}
int main()
{
    int n,x,no;
    char ttl[20];
    printf("Enter how many books\n");
    scanf("%d",&n);
    struct bo b[n];
    while(1)
    {
        printf("Enter 1 to enter new books\n");
        printf("Enter 2 to see details of all book\n");
        printf("Enter 3 to see all the books with price 200 to 500\n");
        printf("Enter 4 to see details of a specific book by book no\n");
        printf("Enter 5 to see details of a specific book by the title\n");
        printf("Enter 6 to exit\n");
        scanf("%d",&x);
        switch (x)
        {
        case 1:
                input(b,n);
                break;
        case 2:
                for(int i=0;i<n;i++)
                {
                    display(b,i);
                }
                break;
        case 3:
                pricedisplay(b,n);
                break;
        case 4:
                printf("Enter the book no\n");
                scanf("%d",&no);
                nodisplay(b,n,no);
                break;
        case 5:
                printf("Enter the title of the book\n");
                fflush(stdin);
                gets(ttl);
                titledisplay(b,n,ttl);
                break;
        case 6:
                exit(0);
        }
    }
    return 0;
}
