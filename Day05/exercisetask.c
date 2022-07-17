#include <stdio.h>
#include <stdarg.h>

int checkBit(int mask, int bit)
{
    return !!(mask & (1ULL<< bit));
} 
size_t bitsNCount(size_t count,size_t bitscnt,...)
{
        int result = 0;
        va_list(args);
        va_start(args,bitscnt);
        for (int i = 0; i < count; i++)
        { 
            int bitCount =0;
            int mask = va_arg(args,int);
            for (int i = 0; i <32; i++)
            {
                if (1==checkBit(mask,i))
                {
                    bitCount++;
                }
                
            }
            if (bitCount == bitscnt)
            {
                result++;
            }
            
        }
        
        va_end(args);
        return result;
        
}

int main()
{

    size_t a = bitsNCount(4,2,0x0a, 0xff,0,1); 
    size_t b = bitsNCount(3,8,0xff, 0x13f1,0xaaaa); 
    size_t c = bitsNCount(5,10,0x0a, 0xa0ff,0,10,0b1010111110111); 
    printf("%lu\n", a);
    printf("%lu\n", b);
    printf("%lu\n", c);


}