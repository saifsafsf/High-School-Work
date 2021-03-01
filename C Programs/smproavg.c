#include <stdio.h>
#include <conio.h>
void main ()
{
    int a, b, c, d, e, sum, product;
    float avg;
    printf("Enter 5 numbers : ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    sum = a+b+c+d+e;
    product = a*b*c*d*e;
    avg = sum/5.0;
    printf("Sum of all the numbers is : %d \n", sum);
    printf("Product of all the numers is : %d \n", product);
    printf("Average of all the numbers is : %5.2f \n", avg);
    getch();
}