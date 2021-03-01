#include <stdio.h>
#include <conio.h>
void power(int , int);
void main()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    power(a, b);
    getch();
}
void power(int x, int y)
{
    int c, d;
    d = 1;
    for(c=1 ; c<=y ; c++)
        d = d*x;
    printf("%d raise to power %d is %d", x, y, d);
}