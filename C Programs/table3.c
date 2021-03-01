#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    b = 1;
    printf("enter a number : ");
    scanf("%d", &a);
    for( ; b <= 10 ; b++)
        printf("%d * %d = %d\n", a, b, a*b);
    getch();
}