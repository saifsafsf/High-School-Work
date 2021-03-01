#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, x;
    for(a = 1 ; a <= 5 ; a++)
    {
        for(x = 1 ; x <= 5 - a ; x++)
            printf("  ");
        for(b = 1 ; b <= a ; b++)
            printf("* ");
        printf("\n");
    }
    getch();
}