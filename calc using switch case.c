#include <stdio.h>
#include <conio.h>
void main()
{
    int num1;
    int num2;
    int result;

    char operator;

    printf("Enter the first number:");
    scanf("%d" ,&num1);

    printf("Enter the operator:");
    scanf(" %c", &operator);

    printf("Enter the second number:");
    scanf("%d" ,&num2);

    switch(operator)
    {
    case'+':
        result=num1+num2;
        printf("%d" ,result);
        break;
    case'*':
        result=num1*num2;
        printf("%d" ,result);
        break;
    case'-':
        result=num1-num2;
        printf("%d" ,result);
        break;
    case'/':
        result=num1/num2;
        printf("%d" ,result);
    default:
        printf("\n Wrong operator");

        getch();
    }
}
