#include <stdio.h>
#include <conio.h>
void main ()
{
    int i;
    printf("enter an even number and see what happens ;) ;) : ");
    scanf("%d", &i);
    for(;(i%2)==0;)
        printf("infinittyyy...");
    printf("invalid number..");
    getch();
}