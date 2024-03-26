#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct stu
{
    int roll;
    char name[20],dept[20];
    float marks;
}stype;
void inputdata(stype s[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the details of student %d\n",i+1);
        printf("Enter the name\n");
        fflush(stdin);
        gets(s[i].name);
        printf("Enter department\n");
        fflush(stdin);
        gets(s[i].dept);
        printf("Enter the roll\n");
        scanf("%d",&s[i].roll);
        printf("Enter the marks\n");
        scanf("%f",&s[i].marks);
    }
    
}
void bca(stype s[],int n)
{
  for(int i=0;i<n;i++)
  {
    if(strcmp(s[i].dept,"BCA")==0)
    {
        printf("Name - %s\n",s[i].name);
        printf("Department - %s\n",s[i].dept);
        printf("Roll - %d",s[i].roll);
        printf("Marks - %f",s[i].marks);
    }
  }
}
void displaystudents(stype s[],int i)
{
    printf("Name- %s\n",s[i].name);
    printf("Department- %s\n",s[i].dept);
    printf("Roll- %d\n",s[i].roll);
    printf("Marks- %f\n",s[i].marks);
}
void student80s90s(stype s[],int n)
{
    printf("Students who got marks <=90 and >=80\n");
    for(int i=0;i<n;i++)
    {
        if(s[i].marks<=90&&s[i].marks>=80)
        {
            displaystudents(s,i);
        }
    }
}
void decreasingorder(stype s[],int n)
{
    stype temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(s[j].marks<s[j+1].marks)
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
}
void alphabeticorder(stype s[],int n)
{
    int i,j;
    stype temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(strcmp(s[j].name,s[j+1].name)>0)
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
}
void studentroll(stype s[],int n,int rollno)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(rollno==s[i].roll)
        {
            displaystudents(s,i);
        }
    }
}
int main()
{
    int i,n,rollno,x;
    printf("ENter how many students\n");
    scanf("%d",&n);
    stype s[n];
    while (1){
        printf("Enter 1 to enter new input\n");
        printf("Enter 2 to see details of all student\n");
        printf("Enter 3 to see only BCA students\n");
        printf("Enter 4 to see details of students with marks >=80 & <=90");
        printf("Enter 5 to Arrange the student details in decreasing order\n");
        printf("Enter 6 to arrange the student details in alphabetic order of name\n");
        printf("Enter 7 to see details of a specific student by his/her roll no\n");
        printf("Enter 8 to exit\n");
        scanf("%d",&x);
        switch(x){
            case 1:
                    inputdata(s,n);
                    break;
            case 2:
                    for(i=0;i<n;i++)
                    {
                      displaystudents(s,i);
                    }
                    break;
            case 3:
                    bca(s,n);
                    break;
            case 4:
                    student80s90s(s,n);
                    break;
            case 5:
                    decreasingorder(s,n);
                    break;
            case 6:
                    alphabeticorder(s,n);
                    break;
            case 7:
                    printf("Enter the roll of the student\n");
                    scanf("%d",&rollno);
                    studentroll(s,n,rollno);
                    break;
            case 8:
                    exit(0);
        }
    }
    return 0;
}
