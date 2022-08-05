
#include <stdint.h>
#include "bitmasks.h"
void setBit(uint32_t *mask, int bit)
{
    *mask |= (1ULL<< bit);

    
}
void clearBit(uint32_t *mask, int bit)
{
    *mask &= ~(1ULL<< bit);
}

int checkBit(uint32_t mask, int bit)
{
    return !!(mask & (1ULL<< bit));
    
}

void flipBit(uint32_t *mask, int bit)
{
    *mask ^= (1ULL<< bit);

  
}