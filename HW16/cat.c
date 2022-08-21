#include<stdio.h>

int main(int argc, char* argp[]){
    FILE *fp = fopen(argp[1], "r"); 
    if (!fp ) {
        perror("file open err\n");
        return -1;
    }
    int sym;
    while ((sym = fgetc(fp)) != EOF)printf("%c", sym);
    fclose(fp);
    return 0;
}