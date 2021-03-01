#include <stdio.h>
#include <conio.h>
void equal(int x, int y)
{
    if(x==y)
        printf("numbers are equal");
    else 
        printf("numbers are not equal");
}
void main()
{
    int a, b;
    printf("enter two numbers : ");
    scanf("%d %d", &a, &b);
    equal(a, b);
    getch();
}