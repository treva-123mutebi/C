#include <stdio.h>
void main()
{
    int principal ,time;
    float rate ,si;

    principal = 1000;
    time = 3;
    rate = 8.5;

    si = principal * rate * time;

    printf("%f" ,si);
}
