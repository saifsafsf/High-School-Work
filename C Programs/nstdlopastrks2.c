#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    for(a = 1 ; a <= 7 ; a++)
    {
        for(b = 7 ; b >= a ; b--)
            printf("* ");
        printf("\n");
    }
    getch();
}