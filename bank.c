#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct customer
{
    char name[50];
    char f_name[50];
    char m_name[50];
    char address[50];
    char status[20];
    char date[40];
    char bank_name[60];
    int accno;
    int aadhar;
    char password[30];
    float balance;
} ctype;
void all_customer(ctype c[], int);
void input(ctype c[], int);
void user_name(ctype c[], int, char[]);
void withdraw(ctype c[], int);
void withdraw_balance(ctype c[], int);
void deposit(ctype c[],int);
void low_balance(ctype c[],int);
void close_id(ctype c[],int);
int main()
{
    int x, i, user = 0, acc;
    char name[20];
    printf("Welcome! to DEBJIT CO-OPERATIVE BANK OF INDIA\n");
    ctype c[100];
    while (1)
    {
        printf("\nPress 1 to open new bank account\n");
        printf("Press 2 to see details of all user\n");
        printf("Press 3 to see deails of a user by his/her name\n");
        printf("Press 4 to withdraw money\n");
        printf("Press 5 to deposit money\n");
        printf("Press 6 to see users who have money < 10$ in their bank account\n");
        printf("Press 7 to close any bank account\n");
        printf("Press 8 to exit\n");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            input(c, user);
            printf("\nCongratulations, Your account has been created succesfully\n");
            user++;
            break;
        case 2:
            if(user==0)
            {
                printf("No user\n");
            }
            for (i = 0; i < user; i++)
            {
                all_customer(c, i);
            }
            break;
        case 3:
            printf("Enter the name of the user\n");
            fflush(stdin);
            gets(name);
            user_name(c, user, name);
            break;
        case 4:
            withdraw(c, user);
            break;
        case 5:
            deposit(c,user);
            break;
        case 6:
            low_balance(c,user);
            break;
        case 7:
            close_id(c,user);
            break;
        case 8:
            exit(0);
        }
    }
    return 0;
}
void input(ctype c[], int i)
{
    printf("________________\n");
    printf("Enter the detials\n");
    printf("Name - ");
    fflush(stdin);
    gets(c[i].name);
    printf("\nFather's name - ");
    fflush(stdin);
    gets(c[i].f_name);
    printf("\nMother's name - ");
    fflush(stdin);
    gets(c[i].m_name);
    printf("\nAadhar number - ");
    scanf("%d", &c[i].aadhar);
    printf("\nAddress - ");
    fflush(stdin);
    gets(c[i].address);
    printf("\nCreate a account number - ");
    scanf("%d", &c[i].accno);
    printf("\nCreate a password - ");
    fflush(stdin);
    gets(c[i].password);
    strcpy(c[i].bank_name,"DEBJIT CO-OPERATIVE BANK OF INDIA");
    printf("\nAmount that you wanna deposit - ");
    scanf("%f", &c[i].balance);
    printf("\nStatus (OPEN/CLOSED) - ");
    fflush(stdin);
    gets(c[i].status);
    printf("\nCurrent date - ");
    fflush(stdin);
    gets(c[i].date);
}
void all_customer(ctype c[], int i)
{
    printf("\n______________________\n");
    printf("Name - %s\n", c[i].name);
    printf("Father's name - %s\n", c[i].f_name);
    printf("Mother's name - %s\n", c[i].m_name);
    printf("Address - %s\n", c[i].address);
    printf("Bank - %s\n",c[i].bank_name);
    printf("Account number - %d\n", c[i].accno);
    printf("Balance - %.2f\n", c[i].balance);
    printf("Status - %s\n", c[i].status);
    printf("Last updated - %s\n", c[i].date);
    printf("________________________\n");
}
void user_name(ctype c[], int n, char name[])
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (strcmp(c[i].name, name) == 0)
        {
            all_customer(c, i);
        }
    }
}
void withdraw(ctype c[], int n)
{
    char pass[30];
    int i, acc;
    int flag = 0;
    printf("Enter the account number\n");
    scanf("%d", &acc);
    for (i = 0; i < n; i++)
    {
        if (c[i].accno == acc)
        {
            flag = 1;
            if (strcmp(c[i].status, "OPEN") == 0)
            {
                printf("Enter the password\n");
                fflush(stdin);
                gets(pass);
                if (strcmp(c[i].password, pass) == 0)
                {
                    withdraw_balance(c, i);
                }
                else
                {
                    printf("Password is wrong\n");
                }
            }
            else
            {
                printf("Account is closed, Withdrawl process denied\n");
            }
        }
    }
    if(flag==0)
        {
            printf("Account number doesn't exist\n");
        }
}
void withdraw_balance(ctype c[], int i)
{
    float bala;
    printf("Enter the amount that you want to withdraw\n");
    scanf("%f", &bala);
    c[i].balance = c[i].balance - bala;
    char datee[30];
    printf("Enter the current date\n");
    fflush(stdin);
    gets(datee);
    strcpy(c[i].date, datee);
    printf("Cash withdrawl succesfully\n");
    printf("Withdraw amount - %.2f\n", bala);
    printf("Remaining amount - %.2f\n", c[i].balance);
}
void deposit(ctype c[],int user)
{
    int i,acc,flag=0;
    float bala;
    printf("Etner the account number - \n");
    scanf("%d",&acc);
    for(i=0;i<user;i++)
    {
        if(c[i].accno==acc)
        {
            flag=1;
            printf("Enter the amount - \n");
            scanf("%f",&bala);
            c[i].balance=c[i].balance+bala;
            printf("Enter the current date - ");
            fflush(stdin);
            gets(c[i].date);
            printf("Money has been deposited succesfully\n");
            printf("Updated balance - %.2f\n",c[i].balance);
        }
    }
}
void low_balance(ctype c[],int user)
{
    printf("Users, having balance < 10$\n");
    for(int i=0;i<user;i++)
    {
        if(c[i].balance<10)
        {
            all_customer(c,i);
        }
    }
}
void close_id(ctype c[],int user)
{
    int acc;
    int flag=0;
    printf("Enter the Account number - \n");
    scanf("%d",&acc);
    for(int i=0;i<user;i++)
    {
        if(c[i].accno==acc)
        {
            flag=1;
            strcpy(c[i].status,"CLOSED");
            printf("Account closed succesfully\n");
        }
    }
    if(flag==0)
    {
        printf("Account number doesn't exist\n");
    }
}