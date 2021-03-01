#include <stdio.h>
#include <conio.h>
void main ()
{
    int a, b, c, max;
    printf("enter three numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    max = a;
    if(b>max)
        max = b;
    if(c>max)
        max = c;
    printf("the maximum number is %d", max);
    getch();
}