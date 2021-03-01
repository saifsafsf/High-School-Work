#include <stdio.h>
#include <conio.h>
void power(long a, long b);
void main()
{
    long x, y;
    printf("enter two numbers : ");
    scanf("%d %d", &x, &y);
    power(x, y);
    getch();
}
void power(long a, long b)
{
    long m , n;
    n = 1;
    for(m=1 ; m<=b ; m++)
        n = n*a;
    printf("%d raise to power %d is %d \n", a, b, n);
}