#include <stdio.h>
#include <stdint.h>

unsigned onesCount(uint64_t mask)
{
        unsigned result =0;
        for (int i = 0; i < 64; i++)
        {
            if (!!(mask & (1 << i)))
            {
                result++;
            }
            
        }
        return result/2;
        
}
int main()
{
    uint64_t mask = 456;
    printf("%d\n", onesCount(mask));
    return 0;
}