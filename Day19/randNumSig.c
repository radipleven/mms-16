#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <time.h>
#include <signal.h>
void handler(int sig)
{
    printf("%d\n", rand()%100);
}

int main()
{
    srand(time(NULL));
    signal(SIGUSR1,handler);
    printf("My PID is: %d\n", getpid());
    while (1);
    return EXIT_SUCCESS;
    
}