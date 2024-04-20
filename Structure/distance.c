#include <stdio.h>
typedef struct student{
    int inch,feet;
}stype;
void input(stype s1,stype s2)
{
    printf("Enter the first distance\n");
    printf("Feet -\n");
    scanf("%d",&s1.feet);
    printf("Inch -\n");
    scanf("%d",&s1.inch);
    printf("Enter the second distance\n");
    printf("Feet -\n");
    scanf("%d",&s2.feet);
    printf("Inch -\n");
    scanf("%d",&s2.inch);
}
void result(stype s3)
{
    printf("Total distance\n");
    printf("Feet - %d\n",s3.feet);
    printf("Inch - %d\n",s3.inch);
}
void add(stype s1,stype s2,stype s3)
{
    s3.feet=s1.feet+s2.feet;
    s3.inch=s1.inch+s2.inch;
    if(s3.inch>=12)
    {
        s3.feet=s3.feet+(s3.inch/12);
        s3.inch=s3.inch%12;
    }
    result(s3);
}
int main()
{
    stype s1,s2,s3;
    input(s1,s2);
    add(s1,s2,s3);
    result(s3);
    return 0;
}
