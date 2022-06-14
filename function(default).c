#include <stdio.h>
#include <conio.h>
void sum();
void main()
{
    sum();
    getch();
    {
        void sum()
        {
            int a=5,b=10,c;
            c=a+b;
            printf("Sum=%d",c);
        }
    }
}
