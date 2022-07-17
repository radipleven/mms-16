#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
        char* number = "156";

        printf("%ld \n",strtol(number,NULL,10));
}