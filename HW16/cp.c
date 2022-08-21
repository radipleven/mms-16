#include <stdio.h>

int main(int argc, char* argp[]){
    FILE *fp1, *fp2;
    fp1 = fopen(argp[1], "r");
    fp2 = fopen(argp[2], "w");

    if (!fp1 || !fp2 || argc !=3){
        perror("err\n");
        return -1;
    }
    
    char c;
    while ((c = fgetc(fp1)) != EOF) fputc(c, fp2);
    fclose(fp1);
    fclose(fp2);

    return 0;
}