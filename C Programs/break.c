#include <stdio.h>
#include <conio.h>
void main()
{
    int n, x;
    for(x = 1 ; x <= 5 ; x++)
    {
        printf("enter a number : ");
        scanf("%d", &n);
        if(n <= 0)
            break;
        printf("you entered : %d\n", n);
    }
    getch();
}