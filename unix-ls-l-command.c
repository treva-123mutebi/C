#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main()
{
    int pid; //process id
    pid = fork(); //create another process

    if ( pid < 0 )
    {
        printf("\n Fork failed \n"); //fail
        exit (-1);
    }
    else if ( pid == 0 )
    {
        //child
        execlp ( "/bin/ls", "ls", "-l", NULL );
        //execute ls
    }
    else
    {
        //parent
        wait (NULL);//wait for child
        printf("\n child complete \n");
        exit (0);
    }
}
