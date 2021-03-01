#include <stdio.h>
#include <conio.h>
#include <math.h>
void main ()
{
    int a;
    double sqroot;
    printf("enter a number : ");
    scanf("%d", &a);
    if(a>=0)
    {
        sqroot = sqrt(a);
        printf("square root of %d is %5.2f", a, sqroot);
    }
    else
        printf("invalid number.... so sorry!!");    
    getch();
}