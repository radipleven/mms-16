#include <stdio.h>
#include "random.h"
#include <stdlib.h>
#define COUNT 10

int compareIntl(const void* num1, const void* num2)
{
   return *(int*)num1 - *(int*)num2;
    
}
int main()
{
    randinit();
    int numbers[COUNT];
    int j;
    for (j = 0; j < COUNT; j++)
    {
        numbers[j] = randint(0,100);

    }

    qsort(numbers,COUNT,sizeof(numbers[0]),compareIntl);
    int i;
    for (i = 0; i < COUNT; i++)
    {
       printf("%d ", numbers[i]);
        
    }
    putchar('\n');
    
    // gcc arrgen.c randoms.c -std=gnu99 -o arrgen -D COUNT=$((RANDOM%10)) && ./arrgen
}