
#include <stdio.h>
struct student{
    int roll;
    char name[10];
    char address[15];
    int age;
};
void studentdetails(struct student s[], int i)
{
    printf("Name = %s\n",s[i].name);
    printf("Roll = %d\n",s[i].roll);
    printf("Age = %d\n",s[i].age);
    printf("Address = %s\n",s[i].address);
}
void studentage(struct student s[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(s[i].age==14)
        {
            printf("%s\n",s[i].name);
        }
    }
}
void evenroll(struct student s[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(s[i].roll%2==0)
        {
            printf("%s\n",s[i].name);
        }
    }
}
void studentenquiry(struct student s[],int stu,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(s[i].roll==stu)
        {
            studentdetails(s,i);
        }
    }
}
int main()
{
    int n,i;
    struct student s[15];
    printf("ENter how many students\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("Enter the details of student %d\n",i+1);
    printf("Name = ");
    fflush(stdin);
    gets(s[i].name);
    printf("\nRoll = ");
    scanf("%d",&s[i].roll);
    printf("\nAge = ");
    scanf("%d",&s[i].age);
    printf("Address = \n");
    fflush(stdin);
    gets(s[i].address);
    }
    printf("Students having age 14\n");
    studentage(s,n);
    printf("Students having even roll no\n");
    evenroll(s,n);
    int stu;
    printf("Enter the roll no of the students to see details\n");
    scanf("%d",&stu);
    studentenquiry(s,stu,n);
    return 0;
}
