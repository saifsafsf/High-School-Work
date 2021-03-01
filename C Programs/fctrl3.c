#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    long f;
    f = 1;
    b = 1;
    printf("enter a number : ");
    scanf("%d", &a);
    for( ; b <= a ; b++)
        f = f * b;
    printf("factorial of %d is %d", a, f);
    getch();
}