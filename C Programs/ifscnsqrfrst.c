#include <stdio.h>
#include <conio.h>
void main ()
{
    int a, b;
    printf("enter two numbers : ");
    scanf("%d %d", &a, &b);
    if(a*a==b)
        printf("2nd number is square of 1st number");
    getch();
}