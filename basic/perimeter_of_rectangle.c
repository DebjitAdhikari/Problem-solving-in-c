#include <stdio.h>

int main()
{
    float lenth, breadth, area, perimeter;
    printf("Enter the lenth of the rectangle\n");
    scanf("%f",&lenth);
    printf("Enter the breadth of the rectangle\n");
    scanf("%f",&breadth);
    area=lenth*breadth;
    printf("The area of the rectangle is\n %.2f",area);
    perimeter=2*(lenth+breadth);
    printf("\nThe perimeter of th rectangle is\n %.2f",perimeter);
    return 0;
}
