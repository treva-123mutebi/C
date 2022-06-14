#include <stdio.h>
#include <conio.h>

void main()
{
    int principal;
    int time;
    int rate;
    int product;

    printf("Enter the principal");
    scanf("%d" ,&principal);

    printf("Enter the time");
    scanf("%d" ,&time);

    printf("Enter the rate");
    scanf("%d" ,&rate);

    product = principal * rate * time;

    printf("%d" ,product);
    getch();
}
