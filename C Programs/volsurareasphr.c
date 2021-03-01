#include <stdio.h>
#include <conio.h>
#define PI 3.14159
void main ()
{
    float r, area, circum;
    printf("Enter the radius of sphere : ");
    scanf("%f", &r);
    area = 4*PI*r*r;
    circum = (4.0/3.0)*PI*r*r*r;
    printf("Area of sphere is : %5.2f \n", area);
    printf("Circumference of sphere is : %5.2f \n", circum);
    getch();
}