#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    a = 1;
    printf("odd numbers : \n");
    do 
    {
        if(a % 2 != 0)
            printf("%d\n", a);
        a++;
    }
    while(a<=20);
    getch();
}