#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argp[]){

    FILE *fp;
    int n = 10;
    if (argc ==3)
    {   
        n = atoi(argp[1]);
        fp = fopen(argp[2], "r");

    }else if (argc ==2)
    {
        fp = fopen(argp[1], "r");
    }
    if (!fp || argc >3){
        perror("err\n");
        return -1;
    }
    char lines[1000];
    while (fgets(lines, sizeof(lines), fp))
    {
        if (n==0) break; 
        n--;
        printf("%s", lines);

    }
    fclose(fp);

    return 0;
}