#include <conio.h>
#include <stdio.h>
void main ()
{
    int a=10, b=15;
    printf("a is %d\nb is %d\n", a, b);
    printf("(a>10) && (b>10) is %d \n", (a>10) && (b>10));
    printf("(a==10) && (b<20) is %d \n", (a==10) && (b<20));
    printf("That was AND Operation. \n");
    printf("(a==10) || (b<15) is %d \n", (a==10) || (b<15));
    printf("(a>10) || (b>20) is %d \n", (a>10) || (b>20));
    printf("That was OR Operation. \n");
    printf("(b>20) is %d \n", !(b>20));
    printf("(a==10) is %d \n", !(a==10));
    printf("That was NOT Operation. \n");
    getch();
}