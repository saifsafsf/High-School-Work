#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, l;
    printf("enter number for the table : ");
    scanf("%d", &a);
    printf("enter length of the table : ");
    scanf("%d", &l);
    for(b = 1 ; b <= l ; b++)
        printf("%d * %d = %d\n", a, b, a*b);
    getch();
}