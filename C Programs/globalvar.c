#include <stdio.h>
#include <conio.h>
int g;
void fun();
void main()
{
    printf("enter a number : ");
    scanf("%d", &g);
    printf("the value of g before function call : %d \n", g);
    fun();
    printf("the value of g after function call : %d\n", g);
    getch();
}
void fun()
{
    g+=10;
}