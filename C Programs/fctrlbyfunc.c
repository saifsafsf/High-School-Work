#include <stdio.h>
#include <conio.h>
void factorial(int n);
void main ()
{
    int a;
    printf("enter a number : ");
    scanf("%d", &a);
    factorial(a);
    getch();
}
void factorial(int n)
{
    int i;
    long fact;
    fact = 1;
    for(i=1 ; i<=n ; i++)
        fact*=i;
    printf("factorial of %d is %d", n, fact);
}