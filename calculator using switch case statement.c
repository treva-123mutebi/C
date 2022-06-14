#include <stdio.h>
#include <conio.h>
void main()
{
    int num1;
    int num2;
    int result;

    char operator;

    printf("enter the numbers:");
    scanf("%d %d", &num1, &num2);

    printf("operator:");
    scanf(" %c", &operator);

    switch (operator)
    {
case '+':
    result=num1+num2;
    printf("%d" ,result);
    break;
case '-':
    result=num1-num2;
    printf("%d" ,result);
    break;
case '*':
    result=num1*num2;
    printf("%d" ,result);
    break;
case '/':
    result=num1/num2;
    printf("%d" ,result);
    break;
default:
    printf("Error! Wrong input");
    getch();
    }
}
