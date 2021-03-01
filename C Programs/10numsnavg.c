#include <stdio.h>
#include <conio.h>
void main()
{
    int n, s;
    float avg;
    s = 0;
    for(n = 1 ; n <= 10 ; n++)
    {
        printf("%d\n", n);
        s = s + n;
    }
    avg = s / 10.0;
    printf("the average of these numbers : %.2f", avg);
    getch();
}