#include <stdio.h>
struct student{
    char name[20];
    int roll;
    float marks;
};
int main()
{
    int n,i;
    printf("Enter how many students\n");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the details of student %d\n",i+1);
        printf("Enter the name\n");
        fflush(stdin);
        gets(s[i].name);
        printf("Enter the roll\n");
        scanf("%d",&s[i].roll);
        printf("Enter the marks\n");
        scanf("%f",&s[i].marks);
    }
    printf("Students having score greater than 80\n");
    for(i=0;i<n;i++)
    {
        if(s[i].marks>=80)
        {
            printf("Name = %s\n",s[i].name);
            printf("Roll = %d\n",s[i].roll);
            printf("Marks = %.2f\n",s[i].marks);
        }
    }
    printf("Students having score less than 40\n");
    for(i=0;i<n;i++)
    {
        if(s[i].marks<40)
        {
            printf("Name = %s\n",s[i].name);
            printf("Roll = %d\n",s[i].roll);
            printf("Marks = %.2f\n",s[i].marks);
        }
    }
    return 0;
}
