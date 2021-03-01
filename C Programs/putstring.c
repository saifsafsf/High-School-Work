#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
void main()
{
    char st[25];
    FILE *in;
    int i;
    if((in = fopen("E:\\Documents\\testing2.txt", "a+")) == NULL)
        printf("File Opening Error!");
    for(i = 1 ; i <= 3 ; i++)
    {
        printf("enter a string (25 characters max.) : ");
        gets(st);
        fputs(st, in);
        fputs("\n", in);
    }
    fclose(in);
    getch();
}