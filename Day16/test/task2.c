#include <stdio.h>

int main( int argc, char *argv[] )
{
  
    FILE* file = fopen("testfile.txt", "r");

    if (!file)
    {
    printf("Unable to open file. \n");
    }   
        
    
    
   /* if (argv[0]== "-B" || argv[0]=="-b" || argv [1]=="-B" || argv[1]=="-b")
    {
       file in binary 
    }
    else
    */ if (argv[0]== "-H" || argv[0]=="-h" || argv [1]=="-H" || argv[1]=="-H")
    {
    
        char ch;
        while ((ch = fgetc(file)) != EOF)
        {
            printf("%02X", ch);
        }
    }
    fclose(file);
    return 0;
}