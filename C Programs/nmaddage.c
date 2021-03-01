#include <stdio.h>
#include <conio.h>
void main ()
{
    char name[25], address[30];
    int age;
    printf("enter your name :");
    scanf("%s", &name);
    printf("\nenter your adress :");
    scanf("%s", &address);
    printf("\nenter your age :");
    scanf("%d", &age);
    printf("\nyour name is %s", name);
    printf("\nyour address is %s", address);
    printf("\nyour age is %d", age);
    getch();
}