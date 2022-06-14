#include <stdio.h>
#include <conio.h>
void main()
{
char text[100];
FILE*fptr;

if((fptr=fopen("yvonne.txt" ,"r"))==NULL)
{
    printf("Error! opening file");

}
fgets("%s" ,text);

printf("%s" ,text);
fclose(fptr);
}
