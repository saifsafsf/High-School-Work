#include <stdio.h>
#include <conio.h>
void main ()
{
    float k;
    double m;
    printf("Enter distance in kilometers:");
    scanf("%f",&k);
    m = k*1000;
    printf("\n%f kilometer = %f meter",k, m);
    getch();
}