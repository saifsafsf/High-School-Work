#include <stdio.h>
#include <conio.h>
void main()
{
    int a, sum;
    a = 1;
    sum = 0;
    while(a<=5)
    {
        printf("%d\n", a);
        sum = sum + a;
        a++;
    }
    printf("sum is %d.\n", sum);
    getch();
}