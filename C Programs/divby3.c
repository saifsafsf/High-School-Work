#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("enter a number : ");
    scanf("%d", &a);
    a % 3 == 0 ? printf("it is divisible by 3.") : printf("it is not divisible by 3.");
    getch();
}