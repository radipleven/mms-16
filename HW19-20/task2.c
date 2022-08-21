#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <pthread.h>
#include <math.h>

#include <unistd.h>

double res = 0;
pthread_mutex_t mux;
int compareDouble(const void* num1, const void* num2)
{
    return *(double*)num1 - *(int*)num2;
    
}


void *routine (void* arg){
    sleep(1);
    char* name = arg;
    double buffer[1000];
    int counter;
    counter = 0;
    FILE* fp = fopen(name, "r");
    FILE* output = stdout;
    while (fscanf(fp, "%lf", &buffer[counter]) != EOF){
        pthread_mutex_lock(&mux);
        qsort(buffer, 20, sizeof(double), compareDouble);
        pthread_mutex_unlock(&mux);
    }counter = 0;

    while (counter<20){
        fprintf(output, "%.2lf", buffer[counter++]);
    }
    fclose(fp);
    fclose(output);
    
    
}
void randinit(void)
{
     srand(time(NULL));
}

int main(int argc, char *argp[]){
    randinit();
    pthread_t th[argc];
    for (int i = 1; i < argc; i++){
        if (pthread_create(th+(i-1), NULL, routine, argp[i])){
            perror("thread not created?");
            return EXIT_FAILURE;
        }
    }
    for (int i = 1; i < argc; i++){
        if (pthread_join(th[i-1], NULL)){
            perror("join unsuccessful?");
            return EXIT_FAILURE;
        }
    }
    printf("Sum = %.2f\n", res);
    return EXIT_SUCCESS;
}