#include <stdio.h>
#include <conio.h>
void main()
{
    int fail, full, total, marks, c;
    float avg = 0.0;
    fail = full = total = 0;
    for(c = 1 ; c <= 35 ; c++)
    {
        printf("enter marks of a student : ");
        scanf("%d", &marks);
        total += marks;
        if(marks < 50)
            fail++;
        if(marks == 100)
            full++;
    }
    avg = total / 35.0;
    printf("average marks are : %.2f\n\n", avg);
    printf("failed students : %d\n\n", fail);
    printf("students who scored 100 : %d\n", full);
    getch();
}