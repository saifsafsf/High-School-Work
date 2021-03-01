#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    char st[25];
    FILE *out;
    if((out = fopen("E:\\Documents\\testing.txt", "a+")) == NULL)
        printf("File Opening Error!");
    while((fgets(st, 25, out)) != NULL)
        printf("%s", st);
    fclose(out);
    getch();
}