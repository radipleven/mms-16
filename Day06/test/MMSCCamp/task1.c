#include <stdio.h>
#include <stdarg.h>

int checkBit(int mask, int bit)
{
    return !!(mask & (1ULL<< bit));
}
size_t onesCount(size_t count,...)
{
    size_t result=0;
    va_list args;
    va_start(args,count);
    for (int i = 0; i < count; i++)
    {
        int mask= va_arg(args,int);
        for (int j = 0; i < 32; j++)
        {
            if (1==checkBit(mask,1))
            {
                result++;
            }
            
        }
        
    }
    va_end(args);
    return result;
}


int main()
{
    
   int mask1 = onesCount(4,0x0a,0,1,2);
   int mask2 = onesCount(3,0xff,0x131,0xaaaa);
   int mask3 = onesCount(2,0b0001,9);
   printf("%d\n", mask1);
   printf("%d\n", mask2);
   printf("%d\n", mask3);   
   
   return 0;
}