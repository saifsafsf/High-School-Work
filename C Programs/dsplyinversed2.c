#include <stdio.h>
#include <conio.h>
void main()
{
    int x, t, r;
    printf("enter an integer : ");
    scanf("%d", &x);
    r = 0;
    for(t = x ; t != 0 ; t /= 10)
        r = 10 * r + t % 10;
    printf("actual number is : %d\n", x);
    printf("reversed number is : %d", r);
    getch();
}
