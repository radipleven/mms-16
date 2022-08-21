#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <time.h>
//#define N 5

int main()
{
    srand(getpid());
    char abc[52]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int i = 0; i < N; i++)
    {
        pid_t pid = fork();
        if (0 == pid)
        {
            for (int i = 0; i < 10; i++)
            {
                printf("%c", abc[rand()%52]);
            }
            putchar('\n');
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