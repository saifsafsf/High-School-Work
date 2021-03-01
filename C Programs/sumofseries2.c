#include <stdio.H>
#include <conio.h>
void main()
{
    float a, b;
    b = 3.0;
    a = 1.0;
    do
    {
        a = a + 1.0/b;
        b = b + 2;
    }
    while(b <= 99);
    printf("sum of series is %f", a);
    getch();
}