#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    printf("enter three numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    if(a == b)
    {
        if(a == c)
            printf("numbers are equal.");
        else
            printf("numbers are not equal.");
    }
    else
        printf("numbers are not equal.");
    getch();
}