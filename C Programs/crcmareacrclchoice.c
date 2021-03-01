#include <stdio.h>
#include <conio.h>
#define PI 3.14159
void main()
{
    float radius, area, circumf;
    int choice;
    char choice2;
    printf("enter radius of the circle in metres : ");
    scanf("%f", &radius);
    printf("enter 1 for area OR 2 for circumference of the respective circle : ");
    scanf("%d", &choice);
    if(choice == 1)
    {
        area = PI * radius * radius;
        printf("you pressed 1.\narea of the circle is %.2f sq. metre.\n", area);
    }
    else if(choice == 2)
    {
        circumf = 2 * PI * radius;
        printf("you pressed 2.\ncircumference of the circle is %.2f metre.\n", circumf);
    }
    else
        printf("invalid input...\n");
    if(choice == 1 || choice == 2)
    {
        printf("do you want to check the other option too? (Y/N) : ");
        choice2 = getche();
        printf("\n");
    }
    if(choice2 == 'y' || choice2 == 'Y')
    {
        if(choice == 1)
        {
            circumf = 2 * PI * radius;
            printf("circumference of the circle is %.2f metre.\n", circumf);
        }
        if(choice == 2)
        {
            area = PI * radius * radius;
            printf("area of the circle is %.2f sq. metre.\n", area);
        }
    }
    if(choice2 == 'n' || choice2 == 'N')
    {
        goto end;
    }
    end:
        getch();
}