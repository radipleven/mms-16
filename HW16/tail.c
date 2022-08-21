#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argp[]){

    FILE *fp;
    int n = 10;
    if (argc ==3)
    {   
        n = atoi(argp[1]) * -1;
        fp = fopen(argp[2], "r");

    }else if (argc ==2)
    {
        fp = fopen(argp[1], "r");
    }
    if (!fp || argc >3){
        perror("err\n");
        return -1;
    }
    
    char chr = getc(fp);
    int linesC=0;
    while (chr != EOF)
    {
        if (chr == '\n')
        {
             linesC++;
        }
        chr = getc(fp);
    }
    int start = linesC-10;
   
    int counter = 1;
    char lines[100];
    while (fgets(lines, sizeof(lines), fp))
    {
        printf("asdW\n");
        if (counter==linesC) break; 
        counter++;
        
        if (counter <= start)
        {
            printf("%s", lines);
        }
        

    }
    fclose(fp);

    return 0;
}