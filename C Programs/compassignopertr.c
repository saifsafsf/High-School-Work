#include <stdio.h>
#include <conio.h>
void main ()
{
    int a;
    a=10;
    printf("value of a : %d \n", a);
    a+=5;
    printf("value after a+=5 : %d \n", a);
    a-=5;
    printf("value after a-=5 : %d \n", a);
    a*=2;
    printf("value after a*=2 : %d \n", a);
    a/=2;
    printf("value after a/=2 : %d \n", a);
    a%=2;
    printf("value after a%%=2 : %d \n", a);
    getch();
}