#include <stdio.h>
#include <conio.h>
void main ()
{
    float a, b;
    int c;
    a = 18.6;
    b = 7.3;
    c = (int)a % (int)b;
    printf("result of a%%b is %d \n", c);
    getch();
}