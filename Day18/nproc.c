#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#define N 5

int main()
{

    for (int i = 0; i < N; i++)
    {
        pid_t pid = fork();
        if (0 == pid)
        {
            printf("Hello friom process %d !\n", i);
            sleep(1);
            exit(EXIT_SUCCESS);
        }
    }
    for (int i = 0; i < N; i++)
    {
        wait(NULL);
    }
    return EXIT_SUCCESS;
}