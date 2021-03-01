#include <stdio.h>
#include <conio.h>
void main()
{
    int x, y;
    printf("enter the value of x & y co-ordinates : ");
    scanf("%d %d", &x, &y);
    if(x == 0)
    {
        if(y == 0)
            printf("the point lies on origin.");
        else 
            printf("the point lies on y-axis.");
    }
    else if(x > 0)
    {
        if(y == 0)
            printf("the point lies on x-axis.");
        else if(y > 0)
            printf("the point lies in 1st quardant.");
        else
            printf("the point lies in 4th quardant.");
    }
    else 
    {
        if(y == 0)
            printf("the point lies on x-axis.");
        else if(y > 0)
            printf("the point lies in 2nd quardant.");
        else 
            printf("the point lies in 3rd quardant.");   
    }
    getch();
}