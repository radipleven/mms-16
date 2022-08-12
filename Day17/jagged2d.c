#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define ROWS 10
double randreal()
{
    return (double)rand() / RAND_MAX;
}

void randinit(void)
{
     srand(time(NULL));
}

int main()
{   
    randinit();
    
    int ** matrix= malloc(ROWS * sizeof(int*));

    if (NULL == matrix)
    {
        fprintf(stderr,"memory error\n");
        return EXIT_FAILURE;
    }
    
    for (int i = 0; i < ROWS; i++)
    {
        matrix[i] = malloc((i+1)* sizeof(int));
        if (NULL == matrix[i])
        {
            fprintf(stderr,"memory error\n");
            return EXIT_FAILURE;
        }
    }
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            matrix[i][j] = j+1;
        }
        
    }
    
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        putchar('\n');
    }

    
    for (int i = 0; i < ROWS; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
}