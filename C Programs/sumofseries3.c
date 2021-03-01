#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, sum;
    sum = 0;
    printf("enter a number : ");
    scanf("%d", &a);
    for(b = 1 ; b <= a ; b++)
        sum += (b*b);
    printf("sum of series : %d", sum);
    getch();
}