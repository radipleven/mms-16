#include <stdio.h>
#include <stdint.h>
void setBit (uint32_t* mask, unsigned len, unsigned bit)//142
{
    mask[bit/(sizeof(*mask) * __CHAR_BIT__)] |= (1ULL<<bit%(sizeof(*mask) * __CHAR_BIT__));
}

int main() 
{
    uint32_t mask[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", mask[i]);
    }
    
    setBit(mask,10,142);  //TBC
    return 0;
}