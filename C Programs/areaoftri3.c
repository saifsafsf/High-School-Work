#include <stdio.h>
#include <conio.h>
float area(float, float);
void main ()
{
    float h, b, ar;
    printf("enter height : ");
    scanf("%f", &h);
    printf("enter base : ");
    scanf("%f", &b);
    ar = area(h, b);
    printf("area of triangle is : %5.2f", ar);
    getch();
}
float area(float x, float y)
{
    return 0.5*x*y;
}