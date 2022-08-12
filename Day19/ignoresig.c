#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <time.h>
#include <signal.h>
void handler(int sig)
{
    printf("Hello\n");
}
int main (int argc, char *argv[])
{
    signal(SIGINT, handler);
    while(1);
    return EXIT_SUCCESS;

}