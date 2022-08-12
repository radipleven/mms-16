#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <time.h>
#include <signal.h>
#include <pthread.h>
void *routine1(void* arg)
{
    while (1)
    {
        printf("Hello\n");
        sleep(1);
    }
    
}

void *routine2(void* arg)
{
    while (1)
    {
        printf("Hello2\n");
        sleep(1);
    }
}
int main()
{
    pthread_t th1;
    pthread_create(&th1,NULL,routine1,NULL);
    pthread_create(&th1,NULL,routine2,NULL);
    sleep(5);
    return EXIT_SUCCESS;
}