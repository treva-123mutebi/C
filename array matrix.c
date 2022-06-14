#include <stdio.h>
#include <conio.h>
void main()
{
    int ar[3] [3];
    int i, j;

    printf("Enter matrix elements: \n");

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d" ,&ar[i] [j]);
        }
    }
    printf("Matrix elements are: \n");

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d\t" ,ar[i] [j]);
        }
    }
    {
        printf("\n");
    }
    getch();
}
