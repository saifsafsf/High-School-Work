#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    long f;
    b = 1;
    f = 1;
    printf("enter a number : ");
    scanf("%d", &a);
    while(b <= a)
    {
        f = f * b;
        b++;
    }
    printf("factorial of %d is %d", a, f);
    getch();
}