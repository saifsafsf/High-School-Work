#include <stdio.h>
#include <conio.h>
void main()
{
    int *var;
    int a = 25;
    var = &a;
    printf("the address of variable 'a' is %x\n", var);
    printf("content of 'a' is %d\n", a);
    printf("address of memory location of variable 'a' is %x\n", &a);
    printf("content of 'a' is %d\n", *var);
    getch();
}