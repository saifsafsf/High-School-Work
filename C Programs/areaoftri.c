#include <stdio.h>
#include <conio.h>
void main ()
{
    float base, height;
    double area;
    printf("Enter base : ");
    scanf("%f", &base);
    printf("enter height : ");
    scanf("%f", &height);
    area = 0.5*base*height;
    printf("area = %5.2f", area);
    getch();
}