#include <stdlib.h>
#include <time.h>
#include "random.h"
int randint(int min, int max)
{
    return min+rand()%(max-min+1);
}

double randreal()
{
    return (double)rand() / RAND_MAX;
}

void randinit(void)
{
     srand(time(NULL));
}
