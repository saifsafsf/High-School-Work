#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("enter number of a weekday : ");
    scanf("%d", &n);
    switch(n)
    {
        case 1:
            printf("Friday.");
            break;
        case 2:
            printf("Saturday.");
            break;
        case 3:
            printf("Sunday.");
            break;
        case 4:
            printf("Monday.");
            break;
        case 5:
            printf("Tuesday.");
            break;
        case 6: 
            printf("Wednesday.");
            break;
        case 7:
            printf("Thursday.");
            break;
        default:
            printf("Invalid Input...");
    }
    getch();
}