#include <stdio.h>
#include <conio.h>
void table(int n);
void main ()
{
    int num;
    printf("enter a number : ");
    scanf("%d", &num);
    table(num);
    getch();
}
void table(int n)
{
    int c;
    for(c=1 ; c<=10 ; c++)
        printf("%d * %d = %d\n", n, c, n*c);
}