#include <stdio.h>
#include <conio.h>
void main()
{
    char text[100];
    FILE*fptr;

    fptr=fopen("yvonne.txt" ,"w");

    if(fptr==NULL)
    {
        printf("error");
    }
    printf("enter text:\n");
    gets(text);

    fprintf(fptr, "%s" , text);
    fclose(fptr);
}
