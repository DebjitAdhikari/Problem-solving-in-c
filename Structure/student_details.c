#include <stdio.h>
struct Student
{
    char name[20];
    int roll;
    float marks;
};
int main()
{
    struct Student s1,s2;
    printf("Enter the details of student 1\n");
    printf("Enter the roll\n");
    scanf("%d",&s1.roll);
    printf("Enter the name\n");
    fflush(stdin);
    gets(s1.name);
    //scanf("%s",&s1.name);
    printf("Enter the marks\n");
    scanf("%f",&s1.marks);
    printf("Enter the details of student 2\n");
    printf("Enter the roll\n");
    scanf("%d",&s2.roll);
    printf("Enter the name\n");
    fflush(stdin);
    gets(s2.name);
    //scanf("%s",&s2.name);
    printf("Enter the marks\n");
    scanf("%f",&s2.marks);
    printf("Student 1 details\n");
    printf("Name = %s\n",s1.name);
    printf("Roll = %d\n",s1.roll);
    printf("Marks obtained = %f\n",s1.marks);
    printf("Student 2 details\n");
    printf("Name = %s\n",s2.name);
    printf("Roll = %d\n",s2.roll);
    printf("Marks obtained = %f\n",s2.marks);
    return 0;
}
