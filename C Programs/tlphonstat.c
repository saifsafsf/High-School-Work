#include <stdio.h>
#include <conio.h>
void main()
{
    char s;
    do
    {
        printf("enter the state of your phone ('w' for working, 'd' for dead): \n");
        scanf("%c", &s);
    } while (s != 'w' && s != 'd');
    if(s == 'w')
        printf("telephone is working.");
    else 
        printf("telephone is not working.");
    getch();
}