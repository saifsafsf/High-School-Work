#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;
    printf("enter a character : ");
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z')
        printf("%c is a capital letter.", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("%c is a small case letter.", ch);
    else if(ch >= '0' && ch <= '9')
        printf("%c is a number.", ch);
    else 
        printf("%c is a symbol.", ch);
    getch();
}