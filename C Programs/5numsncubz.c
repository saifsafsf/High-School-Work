#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    a = 1;
    do
    {
        printf("%d\t%d\n", a, a*a*a);
        a++;
    }
    while(a<=5);
    getch();
}