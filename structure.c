#include <stdio.h>
#include <conio.h>
void main()
{
    struct student
    {
        char Name[40];
        char Address[40];
        int Age;
        int ID;
    };
    struct student s1={"Yvonne","Kampala",18,001};

    printf("Student Name=%s\n",s1.Name);
    printf("Student Address=%s\n",s1.Address);
    printf("Student Age=%d\n",s1.Age);
    printf("Student ID=%d\n",s1.ID);

    getch();

}
