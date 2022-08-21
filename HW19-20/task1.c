#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
//#define COUNT 5

void *routine(void* arg){
    int* num = malloc(sizeof(int)); 
    *num = rand() % 100;
    return num;
}


int main(int argc, char* argp[]){
    srand(time(NULL));
    pthread_t th[atoi(argp[1])];
    char abc[52]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < atoi(argp[1]); i++){
        if (pthread_create(th + i, NULL, routine, NULL)){
            perror("create");
            return EXIT_FAILURE;
        }
    }
    for (int i = 0; i < atoi(argp[1]); i++){
        int *ptrValue;
        if (pthread_join(th[i], (void**)&ptrValue)){
            perror("join");
            return EXIT_FAILURE;
        }
        //printf("Thread value = %d\n", *ptrValue);
        for (int i = 0; i < 10; i++)
            {
                printf("%c", abc[rand()%52]);
            }
        putchar('\n');  putchar('\n');       
        free(ptrValue);
    }
   
    return EXIT_SUCCESS;
}