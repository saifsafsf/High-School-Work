#include <stdio.h>
#include <conio.h>
void main()
{
    int a, sum, pro;
    sum = 0;
    pro = 1;
    for(a = 1 ; a <= 10 ; a++)
    {
        if(a % 2 == 0)
            pro *= a;
        else
            sum += a;
    }
    printf("sum of first 5 odd numbers is : %d\n", sum);
    printf("product of first 5 even numbers is : %d\n", pro);
    getch();
}