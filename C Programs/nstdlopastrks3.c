#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    for(a = 1 ; a <= 7 ; a++)
    {
        b = a;
        while(b <= 7)
        {
            printf("* ");
            b++;
        }
        printf("\n");
    }
    getch();
}