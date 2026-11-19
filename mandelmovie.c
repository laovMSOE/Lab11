/**********************************************
* Name: mandelmovie.c
* Author: Vian Lao
* Date: 11/19/26
* Note: 
**********************************************/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait>
#include "jpegrw.h"
#define MAXPROCESSES 50
#define MINPROCESSES 1

int main(int argc, char *argv[])
{
    int scale = 4;
    int xpos = 0;
    int ypos = 0;

    char *endptr;
    long processnum = strtol(argv[1], &endptr, 10)
    if(processnum > MAXPROCESSES || processnum < MINPROCESSES)
    {
        printf("Process number must be between 1 and 50");
    }
    
    for(int i=0; i<processnum; i++)
    {
        pid_t pid = fork();

        if(pid<0)
        {
            perror("fork");
            exit(1);
        }

        else if (pid == 0) // child process
        {
            


            exit(0);
        }
    }

    for (int i=0; i<numprocess; i++){
            wait(NULL);
    }

    return 0;
}
