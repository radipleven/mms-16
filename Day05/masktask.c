#include <stdio.h>
#include <stdint.h>


void setBit (uint32_t* mask,  unsigned bit)//142
{
    mask[bit/(sizeof(*mask) * __CHAR_BIT__)] |= (1ULL<<bit%(sizeof(*mask) * __CHAR_BIT__));
}
void clearBit(uint32_t *mask, unsigned bit)
{
    mask[bit/(sizeof(*mask) * __CHAR_BIT__)] &= ~(1ULL<< bit%(sizeof(*mask) * __CHAR_BIT__));
    
}
void checkBit(uint32_t *mask, unsigned bit)
{
    mask[bit/(sizeof(*mask) * __CHAR_BIT__)] = !!(mask[bit/(sizeof(*mask) * __CHAR_BIT__)] & (1ULL<< bit%(sizeof(*mask) * __CHAR_BIT__)));
}

void flipBit(uint32_t *mask, unsigned bit)
{
    mask[bit/(sizeof(*mask) * __CHAR_BIT__)] ^= (1ULL<< bit%(sizeof(*mask) * __CHAR_BIT__));
}

void printMask( uint32_t *mask, size_t n)
{
    for (int i = n*sizeof(*mask) * __CHAR_BIT__-1; i >=0; i--)
    {
        printf("%2d ",i);
    }
    putchar('\n');
    putchar('\n');
    for (int bit = n*(sizeof(*mask) * __CHAR_BIT__)-1; bit >=0 ; bit--)
    {
            printf("%d ", !!(mask[n-1-bit/32]&(1<<bit%32)));
    }  
    putchar('\n'); 
}
int main ()
{

    uint32_t mask[2] = {-1,-1};
    printMask(mask,2);
    return 0;
}