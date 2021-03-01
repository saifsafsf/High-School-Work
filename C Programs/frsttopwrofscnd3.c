#include <stdio.h>
#include <conio.h>
int powerp(int, int);
float powern(int, int);
void main()
{
    int a, b;
    float r;
    printf("enter first number : ");
    scanf("%d", &a);
    printf("enter second number : ");
    scanf("%d", &b);
    printf("you entered %d & %d\n", a, b);
    if(b > 0)
    {
        r = powerp(a, b);
        printf("%d raised to the power of %d is %.1f", a, b, r);
    }
    else if(b < 0)
    {
        r = powern(a, b);
        printf("%d raised to the power of %d is %f", a, b, r);
    }
    else
        printf("%d raised to the power of %d is 1", a, b);
    getch();
}
int powerp(int x, int y)
{
    int c, d;
    c = 1; 
    d = 1;
    do 
    {
        d = d * x;
        c++;
    }
    while(c <= y);
    return d;
}
float powern(int x, int y)
{
    int c;
    float d;
    c = 1; 
    d = 1.0;
    y = (-1) * y;
    do 
    {
        d = d * x;
        c++;
    }
    while(c <= y);
    d = 1.0 / d;
    y = (-1) * y;
    return d;
}