#include <stdio.h>
#include <time.h>
#include <stdlib.h>

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
    int n,m;
    scanf("%d %d", &n, &m);
    double ** matrix= malloc(n*sizeof(double*));

    if (NULL == matrix)
    {
        fprintf(stderr,"memory error\n");
        return EXIT_FAILURE;
    }
    
    for (int i = 0; i < m; i++)
    {
        matrix[i] = malloc(m* sizeof(double));
        if (NULL == matrix[i])
        {
            fprintf(stderr,"memory error\n");
            return EXIT_FAILURE;
        }
    }
    


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] = randreal();
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%.2lf ",matrix[i][j]);
        }
        putchar('\n');
    }

    
    for (int i = 0; i < n; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
}