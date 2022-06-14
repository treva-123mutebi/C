#include <stdio.h>
int main()
{
   int num;
   FILE *fptr;

   if ((fptr = fopen("vanita.txt" ,"r")) == NULL){
       printf("Error! opening file");
   }

   fscanf(fptr,"%d", &num);

   printf("%d", num);
   fclose(fptr);

   return 0;
}
