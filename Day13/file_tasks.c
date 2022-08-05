#include <stdio.h>

int main()
{
    FILE* f =fopen("hello_world", "w+");
    fputc('H',f);
    fputc('E',f);
    fputc('L',f);
    fputc('L',f);
    fputc('O',f);
    fputs(" WORLD\n",f);
    fclose(f);
    return 0;
}