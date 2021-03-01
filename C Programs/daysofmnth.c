#include <stdio.h>
#include <conio.h>
void main()
{
    int m;
    printf("enter a month number : ");
    scanf("%d", &m);
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m  == 12)
        printf("number of days is 31.");
    else if(m == 4 || m == 6 || m == 9 || m == 11)
        printf("number of days is 30.");
    else if(m == 2)
        printf("number of days is 28 or 29.");
    else 
        printf("invalid input...");
    getch();
}