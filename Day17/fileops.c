#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <string.h>
int numberOfLines (FILE *file)
{
    char chr = getc(file);
    int lines = 0;
    while (chr != EOF)
    {
        //Count whenever new line is encountered
        if (chr == '\n')
        {
            lines++;
        }
        //take next character from file.
        chr = getc(file);
    }
    return lines+1;
}
int compareInt1(const void* num1, const void* num2)
{
   return (*(int*)num1>*(int*)num2)?1:0;
    
}
int compareInt2(const void* num1, const void* num2)
{
   return (*(int*)num1<*(int*)num2)?1:0;
    
}
int main(int argc, char *argv[])
{
    
    char in[100];
    char out[100];
    int opt;
    
   
    while ((opt = getopt(argc, argv, "i:o:")) != -1) 
    {
        switch (opt) 
        {
        case 'i':
          strcpy(in,optarg);
          break;
        case 'o':
          strcpy(out,optarg);
          break;  
     }
    }
    FILE *fpt;
    FILE *fpt2 = fopen(out,"w");
    int lines = numberOfLines(fpt);
    int numbers[lines];
    int i =0;
    
    if (fpt = fopen(in, "r"))
  {
    while (fscanf(fpt, "%d", &numbers[i]) != EOF)
    {
      i++;
    }
    

    numbers[i] = '\0';

    for (i = 0; numbers[i] != '\0'; i++)
      printf("%d\n", numbers[i]);
  }
      putchar('\n');
   // qsort(numbers, lines, sizeof(int), compareInt1);
    //fwrite(numbers,sizeof(int),lines,fpt2);
    fclose(fpt2);
    fclose(fpt);
   

   
    printf("%d \n", lines);
}