#include <stdio.h>
int main( int argc, char** argv)
{
        FILE *f=fopen(argv[1],'r');
        if (f == NULL)
        {
                perror("Error when opening file \n");
                return -1;
        }
        char c;
        while ((c=fgetc(f))!= EOF)
        {
            printf("%c", c);
        }

        fclose (f);
        return 0;        
}