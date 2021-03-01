#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    a = 1;
    while (a != -1)
    {
        printf("enter a number : ");
        scanf("%d", &a);
        printf("you entered : %d\n", a);
    }
    printf("end of program...");
    getch();
}