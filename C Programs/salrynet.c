#include <stdio.h>
#include <conio.h>
void main()
{
    int salary;
    float net;
    printf("enter your salary : ");
    scanf("%d", &salary);
    if(salary>=20000)
        net = salary - ((7.0/100.0) * salary);
    else if(salary>=10000)
        net = salary - 1000.0;
    else 
        net = salary;
    printf("your net salary is : %.2f", net);
    getch();
}