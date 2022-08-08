#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// char **argv, char *argv[]
int main(int argc, char *argv[]){
    int sum = 0;
    int num;
    if (strcmp(argv[1], "-s") == 0 )
    {
        for (int i = 2; i < argc; i++)
        {
            sscanf(argv[i], "%d", &num);
            sum += num;
        }
        printf("Sum = %d\n", sum);

    }else if (strcmp(argv[1], "-M") == 0)
    {
        int max = 0;
        for (int i = 2; i < argc; i++)
        {
            sscanf(argv[i], "%d", &num);
            if (num>max)
            {
                max = num;
            }
        }
        printf("Max = %d\n", max);
    }else if (strcmp(argv[1], "-m") == 0)
    {
        int min = sscanf(argv[2], "%d", &num);
        for (int i = 2; i < argc; i++)
        {
            sscanf(argv[i], "%d", &num);
            if (num<min)
            {
                min = num;
            }
            
           
        }
        printf("Min = %d\n", min);
    }
   
    return 0;
}