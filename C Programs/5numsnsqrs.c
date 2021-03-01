#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    a = 1;
    while(a <= 5)
    {
        printf("%d\t%d\n", a, a*a);
        a++;
    }
    getch();
}