#include <stdio.h>
#include <conio.h>
void main ()
{
    int marks;
    printf("Enter your marks (__/100) : ");
    scanf("%d", &marks);
    if(marks >= 40)
        printf("Congratulations!! You've passed.");
    getch();
}