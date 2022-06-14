#include <stdio.h>
#include <conio.h>
void main()
{
    int a=5,b=10,c;
    c=a;
    a=b;
    b=c;

    printf("Swapping using third variable:\n");
    printf("a=%d b=%d c=%d\n", a,b,c);

    a=a+b;
    b=a-b;
    c=a-b;

    printf("Swapping without using third variable:\n");
    printf("a=%d b=%d c=%d\n", a,b,c);

    getch();
}
