#include <stdio.h>
int main( int argc, char** argp)
{
        FILE *f=fopen(argp[1],"r");
        int cur_sym;
        int word_counter=0, res=0;
        char* word = argp[2];
        while ((cur_sym=fgetc(f))!=EOF)
        {
            if(cur_sym != word[word_counter])
            {
                word_counter=0;
            }


            if(cur_sym == word[word_counter])
            {
                word_counter++;
            }


            if (word[word_counter]== '\0')
            {
                res++;
                word_counter = 0;
            }
            
        }
        
        printf("\n%d\n", res);
        
        fclose (f);
        return 0;        
}