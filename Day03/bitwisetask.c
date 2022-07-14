#include <stdio.h>
#include <stdint.h>
int main()
{
    //check bit
    uint16_t mask = 0xff;
    int bit =0;
    printf("%d\n", !!(mask&(1<<bit)));

    return 0;
}