#include <stdio.h>
struct employes {
    char name[20];
    float hours,salary;
};
int main()
{
    struct employes e[20];
    int i,n;
    printf("Enter how many emplyess\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the details of the employee %d\n",i+1);
        printf("Name = \n");
        fflush(stdin);
        gets(e[i].name);
        printf("Salary = \n");
        scanf("%f",&e[i].salary);
        printf("Hours work per day = \n");
        scanf("%f",&e[i].hours);
    }
    printf("Promotion:- Updated balance of employess who works more than 8 hours\n");
    for(i=0;i<n;i++)
    {
        if(e[i].hours>=8&&e[i].hours<10&&e[i].hours<12)
        {
            e[i].salary=e[i].salary+50;
            printf("Name = %s\n",e[i].name);
            printf("Salary = %.2f\n",e[i].salary);
        }
        else if(e[i].hours>=10&&e[i].hours<12)
        {
            e[i].salary=e[i].salary+100;
            printf("Name = %s\n",e[i].name);
            printf("Salary = %.f\n",e[i].salary);
        }
        else if(e[i].hours>=12)
        {
            e[i].salary=e[i].salary+150;
            printf("Name = %s\n",e[i].name);
            printf("Salary = %.2f\n",e[i].salary);
        }
    }
    return 0;
}
