#include <stdio.h>
#include <stdint.h>
int checkBit(int mask, int bit)
{
    return !!(mask & (1ULL<< bit));
} 
void flipBit(uint64_t* mask, int bit)
{
    mask[bit/(sizeof(*mask) * __CHAR_BIT__)] ^= (1ULL<< bit%(sizeof(*mask) * __CHAR_BIT__));
} 
void flipOddBits(uint64_t* mask)
{

    for (int i = 1; i < 64; i+=2)
    {
        flipBit(mask,i);
    }
    
}
void mirrorBits(uint16_t* mask)
{
    uint16_t* tempMask = mask;
    int j =16;
    for (int i = 0; i < 16; i++)
    {
        mask[i]=tempMask[j];j--;
    }
    
}
unsigned zerosCount(uint64_t mask1, uint32_t mask2, uint16_t mask3, uint8_t mask4)
{
    unsigned result = 0;
        
            for (int i = 0; i < 64; i++)
            {
                if (!(checkBit(mask1,i)))
                {
                    result++;
                }
                
            }
            for (int i = 0; i < 32; i++)
            {
                if (!(checkBit(mask2,i)))
                {
                    result++;
                }
                
            }
            for (int i = 0; i < 16; i++)
            {
                if (!(checkBit(mask3,i)))
                {
                    result++;
                }
                
            }
            for (int i = 0; i < 8; i++)
            {
                if (!(checkBit(mask4,i)))
                {
                    result++;
                }
                
            }
        return result;            
}
int main()
{

    uint64_t a= 0b000101;
    uint32_t b= 0b000101;
    uint16_t c= 0b000101;
    uint8_t d= 0b000101;
    unsigned zeros = zerosCount(a,b,c,d);
    printf("%lu\n",a );
    flipOddBits(&a);
    printf("%lu\n",a );
    printf("%d\n",c );
    mirrorBits(&c);
    printf("%d\n",c);
    return 0;
}