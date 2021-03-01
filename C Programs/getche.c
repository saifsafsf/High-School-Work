#include <stdio.h>
#include <conio.h>
void main ()
{
    char a;
    printf("enter a character : ");
    a = getche();
    printf ("\nThe ACSII code for %c is %d\n", a, a);
    getch();
}