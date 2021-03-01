#include <stdio.h>
#include <conio.h>
void main()
{
    float bonus;
    int salary, grade;
    printf("enter your salary : ");
    scanf("%d", &salary);
    printf("enter your grade : ");
    scanf("%d", &grade);
    if(grade>15)
        bonus = salary * (50.0/100.0);
    else 
        bonus = salary * (25.0/100.0);
    salary = salary + bonus;
    printf("your total salary after bonus is : %d", salary);
    getch();
}