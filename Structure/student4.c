#include <stdio.h>
#include <stdlib.h>
typedef struct stu{
    int age,roll;
    char name[20],address[20];
}stype;
void input (stype s[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the details of student %d\n",i+1);
        printf("Name -\n");
        fflush(stdin);
        gets(s[i].name);
        printf("Roll -\n");
        scanf("%d",&s[i].roll);
        printf("Age -\n");
        scanf("%d",&s[i].age);
        printf("Address -\n");
        fflush(stdin);
        gets(s[i].address);
    }
}
void display(stype s[],int i)
{      
        printf("Name - %s\n",s[i].name);
        printf("Roll - %d\n",s[i].roll);
        printf("Age - %d\n",s[i].age);
        printf("Address - %s\n",s[i].address);   
}
void evenroll(stype s[],int n)
{
    printf("Students having even roll\n");
    int i;
    for(i=0;i<n;i++)
    {
        if(s[i].roll%2==0)
        {
            display(s,i);
        }
    }
}
void rollno(stype s[],int n,int rol)
{
    printf("Students having age 14\n");
    for(int i=0;i<n;i++)
    {
        if(s[i].roll==rol)
        {
            display(s,i);
        }
    }
}
void age14(stype s[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(s[i].age==14)
        {
            display(s,i);
        }
    }
}
int main()
{
    int x,rol,n;
    printf("ENter how many students\n");
    scanf("%d",&n);
    stype s[n];
    while(1)
    {
        printf("Enter 1 to take new input\nEnter 2 to see details of students having age 14\nEnter 3 to see details of students having even roll no\nEnter 4 to see details of a specific student\nEnter 5 to exit\n");
        scanf("%d",&x);
        switch (x)
        {
            case 1:
                    input(s,n);
                    break;
            case 2:
                    age14(s,n);
                    break;
            case 3:
                    evenroll(s,n);
                    break;
            case 4:
                    printf("Enter the roll of the student\n");
                    scanf("%d",&rol);
                    rollno(s,n,rol);
                    break;
            case 5:
                    exit(0);
        }
        

    }
    return 0;
}
