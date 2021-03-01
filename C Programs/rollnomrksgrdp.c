#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
    FILE *in;
    char grade;
    int marks, rollno, a;
    if((in = fopen("E:\\Documents\\testing2.txt", "a+")) == NULL)
        printf("File Opening Error!");
    for(a = 1 ; a <= 5 ; a++)
    {
        printf("Enter Roll No, Marks, Grade : ");
        scanf("%d %d %c", &rollno, &marks, &grade);
        fprintf(in, "%d %d %c\n", rollno, marks, grade);
    }
    fclose(in);
    getch();
}