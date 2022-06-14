#include <stdio.h>
#include <conio.h>
void main()
{
    int num1;
    int num2;
    int result;
    {
        printf("Enter the first number");
        scanf("%d" ,&num1);

        printf("Enter the second number");
        scanf("%d" ,&num2);

        result = num1 + num2;

        printf("Sum is %d" ,result);

        getch();
    }
}
