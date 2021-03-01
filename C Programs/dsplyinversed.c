#include <stdio.h>
#include <conio.h>
void main ()
{
    int a, b, n;
    printf("Enter a number : ");
    scanf("%d", &n);
    a = n/100;
    n = n%100;
    b = n/10;
    n = n%10;
    printf("number in reverse order is %d%d%d", n, b, a);
    getch();
} 