#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct book{
    int accno;
    char title[20],author[20];
};
void input(struct book b[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the details of book %d\n",i+1);
        printf("Title - ");
        fflush(stdin);
        gets(b[i].title);
        printf("\nAuthor - ");
        fflush(stdin);
        gets(b[i].author);
        printf("\nAccession Number - ");
        scanf("%d",&b[i].accno);
    }
}
void display(struct book b[],int i)
{
    printf("_________\n");
    printf("Title - %s\n",b[i].title);
    printf("Author - %s\n",b[i].author);
    printf("Accession Number - %d\n",b[i].accno);
}
void add(struct book b[],int n)
{
    for(int i=n-1;i<n;i++)
    {
    printf("Enter the details of the book\n");
    printf("Title - ");
    fflush(stdin);
    gets(b[i].title);
    printf("\nAuthor - ");
    fflush(stdin);
    gets(b[i].author);
    printf("\nAccession Number - ");
    scanf("%d",&b[i].accno);
    }
}
void authorname(struct book b[],int n,char name[])
{
    for(int i=0;i<n;i++)
    {
        if(strcmp(b[i].author,name)==0)
        {
            display(b,i);
        }
    }
}
void titlebook(struct book b[],int n,char ttl[])
{
    int d=0;
    for(int i=0;i<n;i++)
    {
        if(strcmp(b[i].title,ttl)==0)
        {
            d++;
        }
    }
    if(d>0)
    {
        printf("Number of books of the same author - %d\n",d);
    }
    else 
    {
        printf("Book title is invalid\n");
    }
}
int main()
{
    int n,x,i;
    char name[20],ttl[20];
    printf("Enter how many books\n");
    scanf("%d",&n);
    struct book b[n];
    while(1)
    {
        printf("Press 1 to enter new input\n");
        printf("Press 2 to see details of all book\n");
        printf("Press 3 to Add new book\n");
        printf("Press 4 to see the details of all books having same author \n");
        printf("Press 5 to see number of books of a particular title\n");
        printf("Press 6 to see total number of books in the libary\n");
        printf("Press 7 to exit\n");
        scanf("%d",&x);
        switch (x)
        {
            case 1:
                    input(b,n);
                    break;
            case 2:
                    for(int i=0;i<n;i++)
                    {
                      display(b,n);
                    }
                    break;
            case 3:
                    n=n+1;
                    add(b,n);
                    break;
            case 4:
                    printf("Enter the name of the author\n");
                    fflush(stdin);
                    gets(name);
                    authorname(b,n,name);
                    break;
            case 5:
                    printf("Enter the title\n");
                    fflush(stdin);
                    gets(ttl);
                    titlebook(b,n,ttl);
                    break;
            case 6:
                    printf("Total number books %d\n",n);
                    break;
            case 7:
                    exit(0);
        }
    }
    return 0;
}
