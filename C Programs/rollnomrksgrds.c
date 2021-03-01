#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int rollno, marks;
    char grade;
    FILE *out;
    if((out = fopen("E:\\Documents\\testing2.txt", "a+")) == NULL)
        printf("File Opening Error!");
    while((fscanf(out, "%d %d %c\n", &rollno, &marks, &grade)) != EOF)
        printf("%d %d %c\n", rollno, marks, grade);
    fclose(out);
    getch();
}