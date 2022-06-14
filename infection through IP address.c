#include <stdio.h>
#include <conio.h>
#include <stdio.h>
#include <conio.h>
struct in_addr*find_valid_host(void)
{
    struct in_addr*address=(struct in_addr*)malloc(sizeof(struct in_addr));

    srand(time(NULL));/*on initialise le generateur aleatoire*/
    address-s_addr=rand();

    while(!isup(*address))
        (address->s_addr)++;
    /*ici,on utilise la routine isup()de nmap pour voir si la cible est up*/

    return address;
}
