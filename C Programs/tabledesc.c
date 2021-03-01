#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    printf("enter a number : ");
    scanf("%d", &a);
    for(b = 10 ; b >= 1 ; b--)
        printf("%d * %d = %d\n", a, b, a*b);
    getch();
}