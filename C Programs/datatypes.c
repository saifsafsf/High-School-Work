#include <stdio.h>
#include <conio.h>

void main (void)
{
    float x, y, sum;
    x=10.6, y=12.3, sum=x+y;
    printf("sum=%d \n", sum);
    sum = sum-8;
    printf("sum=%d \n", sum);
    sum = sum+10;
    printf("sum=%d \n", sum); 
    getch(); 
}