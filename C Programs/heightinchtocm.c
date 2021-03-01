#include <stdio.h>
#include <conio.h>
void main ()
{
    int height;
    float height_in_cm;
    printf("Enter height in inches: ");
    scanf("%d", &height);
    height_in_cm = 2.54*height;
    printf("Your height in centimetre is : %6.2f", height_in_cm);
    getch();
}