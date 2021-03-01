#include <stdio.h>
#include <conio.h>
int incre(int c)
{
    return c+=10;
}
void main()
{
    int a;
    printf("enter a number : ");
    scanf("%d", &a);
    printf("%d", incre(a));
    getch();
}