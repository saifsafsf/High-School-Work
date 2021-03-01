#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    b = 1;
    printf("enter a number : ");
    scanf("%d", &a);
    do 
    {
        printf("%d * %d = %d\n", a, b, a*b);
        b++;
    }
    while(b<=10);
    getch();
}