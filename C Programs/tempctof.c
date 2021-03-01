#include <stdio.h>
#include <conio.h>
void main ()
{
    float cel, faren;
    printf("enter temperature in celcius : ");
    scanf("%f", &cel);
    faren = 1.8*cel+32;
    printf("temperature in fahrenheit is %5.2f", faren);
    getch();
}