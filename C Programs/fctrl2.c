#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, f;
    b = 1;
    f = 1;
    printf("enter a number : ");
    scanf("%d", &a);
    do
    {
        f = f * b;
        b++;
    }
    while(b <= a);
    printf("factorial of %d is %d", a, f);
    getch();
}