#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, num, sum;
    printf("enter the ending number : ");
    scanf("%d", &num);
    printf("\nIntegers\tSum\n");
    for(a = 1 ; a <= num ; a++)
    {
        sum = 0;
        for(b = 1 ; b <= a ; b++)
            sum += b;
        printf("%d\t\t%d\n", a, sum);
    }
    getch();
}