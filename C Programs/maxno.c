#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    printf("enter two numbers : ");
    scanf("%d %d", &a, &b);
    a > b ? printf("%d is maximum.", a) : printf("%d is maximum.", b);
    getch();
}