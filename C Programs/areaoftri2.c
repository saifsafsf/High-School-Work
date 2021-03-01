#include <stdio.h>
#include <conio.h>
#include <math.h>
void main ()
{
    float a, b, c;
    double s, area;
    printf("Enter side A : ");
    scanf("%f", &a);
    printf("Enyter side B : ");
    scanf("%f", &b);
    printf("Enter side C : ");
    scanf("%f", &c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle = %5.2f \n", area);
    getch();
}