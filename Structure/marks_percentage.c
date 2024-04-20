#include <stdio.h>
typedef struct student{
 int roll;
 char name[30];
 float marks,chem,math,phy;
}stype;
void input(stype s[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the details of student %d\n",i+1);
        printf("Name =\n");
        fflush(stdin);
        gets(s[i].name);
        printf("Roll =\n");
        scanf("%d",&s[i].roll);
        printf("Marks obtained in \nPhysics =\n");
        scanf("%f",&s[i].phy);
        printf("Chemistry =\n");
        scanf("%f",&s[i].chem);
        printf("Maths =\n");
        scanf("%f",&s[i].math);
    }
}
void percentage(stype s[],int n)
{
    for(int i=0;i<n;i++)
    {
      s[i].marks= (s[i].math+s[i].chem+s[i].phy)/300*100;
    }
}
void display(stype s[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Details of student %d\n",i+1);
        printf("Name = %s\n",s[i].name);
        printf("Roll = %d\n",s[i].roll);
        printf("Total = %.2f\n",s[i].marks);
    }
}
int main()
{
    int n,i;
    printf("Enter how many students\n");
    scanf("%d",&n);
    stype s[n];
    input(s,n);
    percentage(s,n);
    display(s,n);
    return 0;
}
