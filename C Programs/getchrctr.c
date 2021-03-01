#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    FILE *out;
    char a;
    if((out = fopen("E:\\Documents\\testing.txt", "r")) == NULL)
        printf("File Open Error!");
    while((a = fgetc(out)) != EOF)
        printf("%c", a);
    fclose(out);
    getch();
}