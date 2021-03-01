#include <stdio.h>
#include <conio.h>
void main()
{
    float v;
    char con;
    printf("enter conversion type : \n");
    printf("C for centimetre.\n");
    printf("L for litre.\n");
    printf("K for kilometer.\n");
    printf("G for kilogram.\n");
    scanf("%c", &con);
    printf("enter a value : ");
    scanf("%f", &v);
    switch (con)
    {
    case 'C':
    case 'c':
        printf("value : %.2f", v*2.54);
        break;
    case 'L':
    case 'l':
        printf("value : %.2f", v*3.785);
        break;
    case 'K':
    case 'k':
        printf("value : %.2f", v*1.609);
        break;
    case 'G':
    case 'g':
        printf("value : %.2f", v*0.4536);
        break;
    default:
        printf("invalid conversion type...");
        break;
    }
    getch();
}