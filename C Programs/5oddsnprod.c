#include <stdio.h>
#include <conio.h>
void main()
{
    int pr, n;
    pr = 1;
    for(n = 1 ; n <= 10 ; n += 2)
    {
        pr *= n;
    }
    printf("product of first 5 odd numbers is %d", pr);
    getch();
}
