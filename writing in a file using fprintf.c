#include <stdio.h>
int main()
{
   int num;
   FILE *fptr;

   if ((fptr = fopen("vanita.txt" ,"w")) == NULL){
       printf("Error!");
   }
   {
   printf("enter num:\n");
   getche(num);
   }
   fprintf(fptr,"%d", &num);
   fclose(fptr);

   return 0;
}

