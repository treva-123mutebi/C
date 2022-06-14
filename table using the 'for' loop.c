#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i,t;
    printf("Enter the no.");
    scanf("%d" ,&n);
    for(i=1;i<=10;i++)
    {
        t=n+i;
        printf("%d\n" ,t);
    }
    getch();
}
