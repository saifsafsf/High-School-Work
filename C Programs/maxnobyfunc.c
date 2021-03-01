#include <stdio.h>
#include <conio.h>
void max(int a, int b);
void main()
{
    int x, y;
    printf("enter two numbers : ");
    scanf("%d %d", &x, &y);
    max(x, y);
    getch();
}
void max(int a, int b)
{
    if(a>b)
        printf("%d is maximum number.", a);
    else 
        printf("%d is maximum number.", b);
}