#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    char op;
    printf("enter these in the specified order :\n\tinteger, arithematic operator, integer.\n");
    scanf("%d %c %d", &a, &op, &b);
    switch(op)
    {
        case '+':
            printf("%d + %d = %d", a, b, a+b);
            break;
        case '-':
            printf("%d - %d = %d", a, b, a-b);
            break;
        case '*':
            printf("%d * %d = %d", a, b, a*b);
            break;
        case '/':
            printf("%d / %d = %d", a, b, a/b);
            break;
        case '%':
            printf("%d %% %d = %d", a, b, a%b);
            break;
        default:
            printf("Invalid Operator...");
    }
    getch();
}