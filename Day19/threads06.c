#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>
#include <string.h>


double total = 0;
pthread_mutex_t mux;


void *routine(void* arg){
    sleep(1);
    char *fname=arg;
    double buff[9999];
    int i =0;
    FILE*f = fopen(fname,"r");
    while (fscanf(f, "%lf", &buff[i]) != EOF)
    {
        pthread_mutex_lock(&mux);
        total = total +buff[i];
        pthread_mutex_unlock(&mux);
        i++;
    }
    
}

int main(int argc, char *argv[]){


    srand(time(NULL));
    pthread_t th[argc];
    
    for (int i = 1; i < argc; i++){
        
        if (pthread_create(th + (i-1), NULL, routine, argv[i]) ){
            perror("create");
            return EXIT_FAILURE;
        }
    }
    
    for (int i = 1; i < argc-1; i++){
        
        if (pthread_join(th[i-1], NULL) ){
            perror("join");
            return EXIT_FAILURE;
        }
        
    }
    
    printf("Sum = %lf\n", total);
    return EXIT_SUCCESS;
}