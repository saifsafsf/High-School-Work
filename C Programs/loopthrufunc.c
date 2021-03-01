#include <stdio.h>
#include <conio.h>
int i;
void show ()
{
    printf("%d) pakistan\n", i);
}
void main ()
{
    for(i=1 ; i<=10 ; i++)
        show ();
    getch();
}