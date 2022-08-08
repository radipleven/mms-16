#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

// char **argv, char *argv[]
int main(int argc, char *argv[])
{
   for (int i = 2; i < argc; i++)
    {
        mkdir(argv[i], 0754);
    }
    return 0;
}
