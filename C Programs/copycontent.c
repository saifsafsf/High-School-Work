#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    FILE *in, *out;
    char a;
    if((out = fopen("E:\\Documents\\testing.txt", "r")) == NULL)
        printf("File Opening Error!");
    if((in = fopen("E:\\Documents\\testing2.txt", "w")) == NULL)
        printf("File Opening Error!");
    while((a = fgetc(out)) != EOF)
        fputc(a, in);
    fclose(in);
    fclose(out);
    getch();
}