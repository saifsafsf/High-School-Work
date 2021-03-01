#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    FILE *in;
    char st[25];
    int a;
    if((in = fopen("E:\\Documents\\testing2.txt", "a+")) == NULL)
        printf("File Opening Error!");
    for(a = 0 ; a < 3 ; a++)
    {
        printf("enter a string (25 characters max) : ");
        gets(st);
        fputs(st, in);
        fputs("\n", in);
    }
    fclose(in);
    getch();
}