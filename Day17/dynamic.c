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
    int n;
    scanf("%d", &n);
    double* ptr = malloc((n) * sizeof(double));
    int i;
    for ( i = 0; i < n; i++)
    {
        ptr[i] = randreal();
       // printf("%.2lf ", ptr[i]);
        //counter = i;
    }
     putchar('\n');
    int m;
    scanf("%d", &m);
    ptr = realloc(ptr,(m+n)*sizeof(double));
    for (int j = 0; j < m; j++)
    {
        ptr[i++] = randreal()+1.0;
        //printf("%.2lf ", ptr[counter]);
        
    }
     putchar('\n');
    int p;
    scanf("%d", &p);
    ptr = realloc(ptr,(m+n+p)*sizeof(double));

    for (int k = 0; k < p; k++)
    {
        ptr[i++] = randreal()+2.0;
       // printf("%.2lf ", ptr[icounter]);
        
    }
    putchar('\n');
   
    for (int l = 0; l < i; l++)
    {
        
        printf("%.2lf ", ptr[l]);
        
    }
    putchar('\n');
    free(ptr);
    return 0;
}