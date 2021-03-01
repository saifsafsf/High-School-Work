#include <stdio.h>
#include <conio.h>
void main()
{
    int o, s;
    s = 0;
    for(o = 1 ; o <=100 ; o = o + 2)
        s = s + o;
    printf("sum of first 50 odd numbers is : %d", s);
    getch();
}