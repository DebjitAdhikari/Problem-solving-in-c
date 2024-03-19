#include <stdio.h>
struct Student{
    int roll;
    char name[20];
    float marks;
};
int main()
{
    int n,i;
    printf("Enter how many students\n");
    scanf("%d",&n);
    struct Student S[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the details of student %d\n",i+1);
        printf("Enter the name\n");
        fflush(stdin);
        gets(S[i].name);
        printf("Enter the Roll\n");
        scanf("%d",&S[i].roll);
        printf("Enter the Marks\n");
        scanf("%f",&S[i].marks);
    }
    for(i=0;i<n;i++)
    {
        printf("Details of student %d\n",i+1);
        printf("Name = %s\n",S[i].name);
        printf("Roll = %d\n",S[i].roll);
        printf("Marks = %.2f\n",S[i].marks);
    }
    return 0;
}
