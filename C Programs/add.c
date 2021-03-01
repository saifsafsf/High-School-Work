#include <stdio.h>
#include <conio.h>
int sum(int x, int y);
void main()
{
    int a, b, s;
    printf("enter two numbers : ");
    scanf("%d %d", &a, &b);
    s = sum(a, b);
    printf("%d + %d = %d", a, b, s);
    getch();
}
int sum(int x, int y)
{
    return x+y;
}