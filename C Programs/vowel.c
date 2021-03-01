#include <stdio.h>
#include <conio.h>
void main ()
{
    char a;
    printf("enter a character : ");
    scanf("%c", &a);
    if(a == 'a' || a == 'A' || a == 'e' || a == 'E' || a == 'i' || a == 'I' || a == 'o' || a == 'O' || a == 'u' || a == 'U')
        printf("you entered a vowel : %c", a);
    else 
        printf("you did not enter a vowel : %c", a);
    getch();
}