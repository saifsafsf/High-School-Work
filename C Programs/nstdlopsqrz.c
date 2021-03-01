#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    for(a = 0 ; a <= 10 ; a++)
    {
        for(b = 0 ; b <= a ; b++)
            printf("%d\t", b*b);
        printf("\n");
    }
    getch();
}