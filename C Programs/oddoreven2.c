#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    if(n%2 != 0)
        printf("you entered odd number.");
    else 
        printf("you entered even number.");
    getch();
}