#include <stdio.h>
#include <conio.h>
#define PI 3.14159
float circum(float a)
{
    return PI*2*a;
}
void main()
{
    float r, cir;
    printf("enter the radius of the circle : ");
    scanf("%f", &r);
    cir = circum(r);
    printf("circumference of the circle of radius %.2f is %.2f .", r, cir);
    getch();
}