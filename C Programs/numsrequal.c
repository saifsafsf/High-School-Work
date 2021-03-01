#include <stdio.h>
#include <conio.h>
void main ()
{
    int a, b;
    printf("enter two numbers : ");
    scanf("%d %d", &a, &b);
    if(a==b)
        printf("numbers are equal");
    else 
        printf("numbers are not equal");
    getch();
}