#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, num;
    long f;
    printf("enter the ending number : ");
    scanf("%d", &num);
    printf("\nIntegers\tFactorial\n");
    for(a = 1 ; a <= num ; a++)
    {
        f = 1;
        for(b = 1 ; b <= a ; b++)
            f *= b;
        printf("%2d\t\t%8d\n", a, f);
    }
    getch();
}