#include <stdio.h>
#include <stdarg.h>

unsigned int countBits(unsigned int n)
{
    unsigned count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

unsigned bitsNCount(unsigned count, unsigned bitscount, ...)
{
    int result =0;
    va_list args;
    va_start(args,bitscount);
    for (int i = 0; i < count; i++)
    {
       int mask= va_arg(args,int);
       if (countBits(mask)==bitscount)
       {
            result++;
       }
       
    }
    va_end(args);
    return result;
}
int main()
{
    printf("%d\n", bitsNCount(4, 2, 0x0a, 0xff, 0, 1));
    printf("%d\n", bitsNCount(3, 8, 0xff, 0x13f1, 0xaaaa));
    printf("%d\n", bitsNCount(5, 10, 0x0a, 0xa0ff, 0, 10, 0b1010111110111));
    return 0;
}