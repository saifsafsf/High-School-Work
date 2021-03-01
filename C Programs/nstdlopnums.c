#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    a = 14;
    do
    {
        b = a;
        do
        {
            printf("%d\t", a);
            b--;
        } while (b >= 1);
    printf("\n");
    a--;    
    } while (a >= 1);
    getch();
}