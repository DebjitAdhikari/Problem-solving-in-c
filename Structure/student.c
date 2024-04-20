#include <stdio.h>
typedef struct student{
    int roll,age;
    char name[30];
}type;
void input(type s[],int);
void rollno(type s[],int,int);
void printstudent(type s[],int);
int main()
{
    int x,i,n;
    printf("ETNer how many students\n");
    scanf("%d",&n);
    type s[n];
    input(s,n);
    printf("Enter the roll of the student to see details\n");
    scanf("%d",&x);
    rollno(s,n,x);
    return 0;
}
void input(type s[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the details of %d\n",i+1);
        printf("Enter the name -\n");
        fflush(stdin);
        gets(s[i].name);
        printf("Enter the roll -\n");
        scanf("%d",&s[i].roll);
        printf("Enter the age -\n");
        scanf("%d",&s[i].age);
    }
}
void rollno(type s[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(s[i].roll==x)
        {
            printstudent(s,i);
        }
    }
}
void printstudent(type s[],int i)
{
    printf("Name \t Roll \t Age \t\n");
    printf("%s\t%d\t%d\t",s[i].name,s[i].roll,s[i].age);
}