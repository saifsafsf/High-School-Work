#include <stdio.h>
#include <conio.h>
float kilo(float);
void main()
{
    float p, k;
    printf("enter weight in pounds : ");
    scanf("%f", &p);
    k = kilo(p);
    printf("weight in kilogram : %5.2f", k);
    getch();
}
float kilo(float pn)
{
    return pn/2.205;
}