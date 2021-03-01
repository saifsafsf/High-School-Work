#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    printf("enter a starting and ending number : ");
    scanf("%d %d", &a, &b);
    printf("even numbers : \n");
    while (a <= b)
    {
        if(a % 2 == 0)
            printf("%d \n", a);
        a++;
    }
    getch();
}