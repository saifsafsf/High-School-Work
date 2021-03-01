#include <stdio.h>
#include <conio.h>
void main()
{
    float a, b;
    a = 2.0;
    b = 1.0;
    while(a <= 100)
    {
        b = b + 1.0/a;
        a = a + 2;
    }
    printf("result is %f\nwhen rounded off : %.2f", b, b);
    getch();
}