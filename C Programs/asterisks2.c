#include <stdio.h>
#include <conio.h>
void print_asterisks();
void main()
{
    print_asterisks();
    getch();
}
void print_asterisks()
{
    int i, j;
    for(i=1 ; i<=7 ; i++)
    {
        j = i;
        while(j<=7)
        {
            printf(" * ");
            j++;
        }
        printf("\n");
    }
}