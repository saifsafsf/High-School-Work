#include <stdio.h>
#include <conio.h>
void main()
{
    int o;
    for(o = 1 ; o <= 200 ; o+=2)
        if(o % 7 != 0)
            printf("%d    ",o);
    getch();
}