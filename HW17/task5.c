#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>


void handler(int sig)
{
    signal(SIGTSTP, handler); 
}
void handler2(int sig)
{
    signal(SIGINT, handler);
}
int main(){
    
    signal(SIGTSTP, handler);
    signal(SIGINT, handler2);
    while (1){
        printf("MMS C Camp\n");
        usleep(500000);
    }
    
    return EXIT_SUCCESS;
}