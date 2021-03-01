#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    b = 1;
    printf("enter a number : ");
    scanf("%d", &a);
    while(b <= 10)
    {
        printf("%d * %d = %d\n", a, b, a*b);
        b++;
    }
    getch();
}