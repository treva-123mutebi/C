#include <stdio.h>
#include <conio.h>
void main()
{
    int a;

    printf("Enter the value of a:\n");
    scanf("%d" ,&a);

    if(a<=100)
    {
        printf("Excellent");
    }
    else if(a<=75)
    {
        printf("Very good");
    }
    else if(a<=60)
    {
        printf("Average");
    }
    getch();
}
