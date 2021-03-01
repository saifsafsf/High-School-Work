#include <stdio.h>
#include <conio.h>
void main()
{
    int a, c;
    for(c = 1 ; c <= 5 ; c++)
    {
        printf("enter a number : ");
        scanf("%d", &a);
        if(a <= 0)
            continue;
        printf("you entered %d\n", a);
    }
    getch();
}