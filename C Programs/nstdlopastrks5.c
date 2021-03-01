#include <conio.h>
#include <stdio.h>
void main()
{
    int a, b, x;
    for(a = 5 ; a >= 1 ; a--)
    {
        for(x = 1 ; x <= 5-a ; x++)
            printf("  ");
        for(b = 1 ; b <= a ; b++)
            printf("* ");
        printf("\n");
    }
    getch();
}