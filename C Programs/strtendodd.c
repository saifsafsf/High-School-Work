#include <stdio.h>
#include <conio.h>
void main()
{
    int s, e;
    printf("enter start and end numbers : ");
    scanf("%d %d", &s, &e);
    do 
    {
        if(s % 2 != 0)
            printf("%d\n", s);
        s++;
    }
    while(s <= e);
    getch();
}