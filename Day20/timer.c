#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/time.h>
#include<sys/wait.h>

//gcc timer.c -o timer
// ./timer arg1 arg2 arg3 arg4 ///
// -> how much time it took the program (start to finish)
// ./timer ./slow

typedef struct timeval timeval;
int main(int argc, char *argp[])
{
    timeval tv1,tv2;
    gettimeofday(&tv1, NULL);
    printf("%lu %lu \n", tv1.tv_sec, tv1.tv_usec);

    int pid = fork();
    if (pid <0)
    {
        
        perror("Fork failed \n");
        exit(-1);


    }else if(pid ==0)
    {
        //child
        argp[argc] = NULL;
        execvp(argp[1],argp+1);
        //Exec failed
        perror("exec failed");
        exit(-1);
    }else
    {
        //parent
        int status;
        wait(&status);
        if (WIFEXITED(status) && WEXITSTATUS(status) == 0)
        {
             printf("Child process has ended successfully. \n");
        }else
        {
             printf("Child process has failed. \n");
        }
        
       
        gettimeofday(&tv2, NULL);
        printf("%lu %lu \n", tv2.tv_sec, tv2.tv_usec);

        printf("Elapsed time: %lu \n", (tv2.tv_sec - tv1.tv_sec)*1000000 + (tv2.tv_usec - tv1.tv_usec));
        exit(0);
    }
    
    
    return EXIT_SUCCESS;
}