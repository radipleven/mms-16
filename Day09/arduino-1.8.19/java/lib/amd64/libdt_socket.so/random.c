#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"



int main()
{
    randinit();
    printf("Rand max: %d\n", RAND_MAX);
    for (int i = 0; i < 10; i++)
    {
        printf("%.2lf\n", randreal(1,6)); 
    }
    return 0;
}

