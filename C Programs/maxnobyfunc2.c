#include <stdio.h>
#include <conio.h>
int max(int, int);
void main()
{
    int a, b, m;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    m = max(a, b);
    printf("maximum number is %d", m);
    getch();
}
int max(int x, int y)
{
    if(x>y)
        return x;
    else 
        return y;
}
