#include <stdio.h>
#include <conio.h>

void main()
{
    int num1;
    int num2;
    int result;

    printf("Enter first number");
    scanf("%d" ,&num1);

    printf("Enter second number");
    scanf("%d" ,&num2);

    result= num1 + num2;

    printf("sum is %d" ,result);
    getch();
}
