#include <stdio.h>
#include <conio.h>
void main()
{
    struct book
    {
        char book_name[40];
        int pages;
        int price;
    };
    struct book b1[3];
    int i;

    for(i=0;i<=2;i++)
    {
        printf("Book %d\n",i++);

        printf("Enter book name:");
        scanf("%s",b1[i].book_name);

        printf("Enter book pages:");
        scanf("%d",b1[i].pages);

        printf("Enter book price:");
        scanf("%d",b1[i].price);

        printf("\n");
    }
    for(i=0;i<=2;i++)
    {
        printf("\n");
        printf("Book name=%s\n Pages=%d\n Price=%d\n, b1[i]book name, b1[i]pages, b1[i]price");
    }
        getch();

    }
