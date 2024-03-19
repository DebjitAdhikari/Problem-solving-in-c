#include <stdio.h>
struct com{
float real;
float img;
};
int main()
{
    struct com s[20];
    printf("Enter the first complex number\n");
    printf("Real \n");
    scanf("%f",&s[1].real);
    printf("Img\n");
    scanf("%f",&s[1].img);
    printf("Enter the second complex number\n");
    printf("Real \n");
    scanf("%f",&s[2].real);
    printf("Img\n");
    scanf("%f",&s[2].img);
    char c;
    printf("Press + , - , * , / ");
    gets(c);
    if(c=='+')
    {
        s[3].real=s[1].real+s[2].real;
        s[3].img=s[1].img+s[2].img;
        printf("Real %.2f\n",s[3].real);
        printf("Img %.2f\n",s[3].img);
    }
    else if(c=='-')
    {
        s[3].real=s[1].real-s[2].real;
        s[3].img=s[1].img-s[2].img;
        printf("Real %.2f\n",s[3].real);
        printf("Img %.2f\n",s[3].img);
    } 
    else if(c=='*')
    {
        s[3].real=s[1].real*s[2].real;
        s[3].img=s[1].img*s[2].img;
        printf("Real %.2f\n",s[3].real);
        printf("Img %.2f\n",s[3].img);
    } else if(c=='/')
    {
        s[3].real=s[1].real/s[2].real;
        s[3].img=s[1].img/s[2].img;
        printf("Real %.2f\n",s[3].real);
        printf("Img %.2f\n",s[3].img);
    } 
    return 0;
}
