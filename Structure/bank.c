#include <stdio.h>
#include <stdlib.h>
struct person{
    int accno;
    float bala;
    char name[30];
};
void input(struct person p[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the details of customer %d\n",i+1);
        printf("Name - ");
        fflush(stdin);
        gets(p[i].name);
        printf("\nAccount no - ");
        scanf("%d",&p[i].accno);
        printf("\nBalance - ");
        scanf("%f",&p[i].bala);
    }
}
void display(struct person p[],int i)
{
    printf("___________\n");
    printf("Name - %s\n",p[i].name);
    printf("Account no - %d\n",p[i].accno);
    printf("Balance - %.2f$\n",p[i].bala);
}
void less200(struct person p[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(p[i].bala<200)
        {
            display(p,i);   
        }
    }
}
void add(struct person p[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(p[i].bala>1000)
        {
            p[i].bala=p[i].bala+100;
        }
    }
    printf("Balace added succesfully\n");
}
int main()
{
    int n,x;
    printf("Enter how many users\n");
    scanf("%d",&n);
    struct person p[n];
    while(1)
    {
        printf("Enter 1 to take new input\n");
        printf("Enter 2 to print the details of all customer\n");
        printf("Enter 3 to see details of customer having balance <200\n");
        printf("Enter 4 to add $100 to those users who have balance >$1000\n");
        printf("Enter 5 to exit\n");
        scanf("%d",&x);
        switch (x)
        {
        case 1:
                input(p,n); 
                break;
        case 2:
                for(int i=0;i<n;i++)
                {
                    display(p,i);
                }
                break;
        case 3:
                less200(p,n);
                break;
        case 4:
                add(p,n);
                break;
        case 5:
                exit(0);
        }
    }
    return 0;
}
