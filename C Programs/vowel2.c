#include <stdio.h>
#include <conio.h>
void main()
{
    char c;
    printf("enter a alphabet : ");
    scanf("%c", &c);
    switch(c)
    {
        case 'a':
        case 'A':
            printf("you entered a vowel.");
            break;
        case 'e':
        case 'E':
            printf("you entered a vowel.");
            break;
        case 'i':
        case 'I':
            printf("you entered a vowel.");
            break;
        case 'o':
        case 'O':
            printf("you entered a vowel.");
            break;
        case 'u':
        case 'U':
            printf("you entered a vowel.");
            break;
        default:
            printf("you entered a consonant.");
    }
    getch();
}