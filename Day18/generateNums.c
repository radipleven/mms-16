#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
int main (int argc, char *argv[])
{

    int opt,n=10;
    char file_o [200];
    char file_e [200];
    int fdo =-1, fde=-1;

    while ((opt = getopt(argc, argv, ":n:o:e:")) != -1) 
    {
        switch (opt) 
        {
        case 'n':
          sscanf(optarg,"%d",&n);
          break;
        case 'o':
          
          fdo = open(file_o, O_WRONLY | O_CREAT | O_TRUNC, 0777);
          dup2(fdo,STDOUT_FILENO);
          break;
        case 'e':
          
            fde = open(file_e, O_WRONLY | O_CREAT | O_TRUNC, 0777);
          dup2(fde,STDERR_FILENO);
          break; 
        case '?':
          fprintf(stderr, "Unknow option %c \n", optopt);
          return EXIT_FAILURE;
          break; 
        case ':':
          fprintf(stderr, "Missing arg for %c \n", optopt);
          return EXIT_FAILURE;
          break;     
        }
    }   
    
    for (int i = 0; i < n; i++)
    {
        
        fprintf(stdout,"%d ",1 +rand()%10);
    }
    fputc('\n',stdout);

    for (int i = 0; i < n; i++)
    {
        
        fprintf(stderr,"%d ",1 +rand()%10);
    }
    fputc('\n',stderr);

    if (fde != -1)
    {
        close(fde);
    }
    if (fdo != -1)
    {
        close(fdo);
    }
    
    return EXIT_SUCCESS;
}