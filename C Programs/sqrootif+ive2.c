#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    float a;
    positive: 
        printf("please enter a positive number : ");
        scanf("%f", &a);
        if(a < 0)
            goto positive;
        else
            printf("square root of %.1f is %.2f", a, sqrt(a));
    getch();
}