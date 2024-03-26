#include <stdio.h>
struct marks{
int roll;
float phy;
float math;
float chem;
char name[10];
};
int main()
{
    struct marks s[15];
    int n,i;
    printf("Enter the how many students\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the details of student %d\n",i+1);
        printf("Enter the name of student\n");
        fflush(stdin);
        gets(s[i].name);
        printf("Enter the roll\n");
        scanf("%d",&s[i].roll);
        printf("Enter every marks out of 100\n");
        printf("Maths\n");
        scanf("%f",&s[i].math);
        printf("Physics\n");
        scanf("%f",&s[i].phy);
        printf("Chemistry\n");
        scanf("%f",&s[i].chem);
    }
    printf("Percentage of the student\n");
    for ( i = 0; i < n; i++)
    {
        printf("Student percentage list\n");
        printf("Student %d = %.2f\n",i+i,(s[i].chem+s[i].math+s[i].phy)/300*100);
    }
    {

    }
    return 0;
}
