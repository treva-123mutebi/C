#include <stdio.h>
#include <conio.h>

void main()
{
    int num1;
    int num2;
    int result;

    printf("Enter the numbers:");
    scanf("%d %d" ,&num1 ,&num2);

    result = num1 + num2;

    printf("=%d" ,result);
    getch();
}
