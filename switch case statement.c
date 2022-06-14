#include <stdio.h>
#include <conio.h>
void main()
{
    int a = 2;
    switch (a)
    {
    case 1:
        printf("Hello");
        break;
    case 2:
        printf("Welcome");
        break;
    case 3:
        printf("Aptech");
        break;
    default:
        printf("wrong choice");
        getch();
    }
}
