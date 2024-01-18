//Write a c program to enter radius of a circle and find its diameter, circumference and area.
#include <stdio.h>
int main()
{
    float radius,diameter,circumference,area;
    printf("Enter the radius of the circle\n");
    scanf("%f",&radius);
    diameter=2*radius;
    printf("The diameter of the circle is \n %.2f\n",diameter);
    circumference=2*3.14*radius;
    printf("The circumference of the circle is \n %.2f\n",circumference);
    area=3.14*radius*radius;
    printf("The area of the circle is\n %.2f\n",area);
    return 0;
}
