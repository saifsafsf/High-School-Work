#include <stdio.h> 
#include <conio.h>
void main()
{
    int units;
    float bill;
    printf("enter your units used for electricity bill : ");
    scanf("%d", &units);
    if(units > 500)
        bill = units * 7;
    else if(units > 300)
        bill = units * 5;
    else 
        bill = units * 2;
    bill += 150;
    if(bill > 2000)
        bill += (bill * (5.0/100.0));
    printf("your total bill is : %.2f", bill);
    getch(); 
}