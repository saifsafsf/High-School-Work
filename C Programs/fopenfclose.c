#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    FILE *MyFile;
    if((MyFile = fopen("E:\\Fouzia Shahid\\Pictures\\Saved Pictures\\countryside_fields_landscape_4k.jpg", "w")) == NULL)
        printf("file open error!");
    else 
        printf("done!");
    fclose(MyFile);
    getch();
}