#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("enter a number : ");
    scanf("%d", &a);
    if(a>0)
        printf("the number is positive.");
    else if(a<0)
        printf("the number is negative.");
    else 
        printf("the number is zero.");
    getch();
}