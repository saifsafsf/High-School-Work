#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
    FILE *in, *out;
    char str[25];
    if((in = fopen("E:\\Documents\\testing.txt", "a+")) == NULL)
        printf("File Opening Error!");
    if((out = fopen("E:\\Documents\\testing2.txt", "a+")) == NULL)
        printf("File Opening Error! #2");
    while((fgets(str, 25, out)) != NULL)
        fputs(str, in);
    fclose(out);
    fclose(in);
    getch();
}