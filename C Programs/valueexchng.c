#include <stdio.h>
#include <conio.h>
void main ()
{
    int a, b, tempo;
    printf ("enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("value in a = %d \n", a);
    printf("value in b = %d \n", b);
    tempo = a;
    a = b;
    b = tempo;
    printf("after exchange, a = %d \n", a);
    printf("after exchange, b = %d \n", b);
    getch();
}