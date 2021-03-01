#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    FILE *in;
    char a;
    if((in = fopen("E:\\Documents\\testing.txt", "a")) == NULL)
        printf("file opening error!");
    printf("enter characters (use period to end) : ");
    a = getche();
    while(a != '.')
    {
        fputc(a, in);
        a = getche();
    }
    fclose(in);
    getch();
}