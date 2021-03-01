#include <conio.h>
#include <stdio.h>
void main ()
{
    int a, b, x, y;
    a = b = x = y = 0;
    b = a--;
    y = --x;
    printf("a=%d \n b=%d \n", a, b);
    printf("x=%d \n y=%d \n", x, y);
    getch();    
}