#include <stdio.h>
#include <stdint.h>
void setBit(uint64_t *mask, int bit)
{
    *mask |= (1ULL<< bit);

    
}
void clearBit(uint64_t *mask, int bit)
{
    *mask &= ~(1ULL<< bit);

    
}

void checkBit(uint64_t *mask, int bit)
{
    *mask = !!(*mask & (1ULL<< bit));
    
}

void flipBit(uint64_t *mask, int bit)
{
    *mask ^= (1ULL<< bit);

  
}
int main()
{
    uint64_t attendance = 0;
    int option;
    int bit =0;
    

while(1)
{
    printf("1. Set attendance\n");
    printf("2. Clear attendance\n");
    printf("3. Attendance info\n");
    printf("4. Change attendance\n");
    printf("5. Exit\n");
    scanf("%d", &option);
    if (1 == option)
    {
        scanf("%d", &bit);
        setBit(&attendance,bit);
        
    }else if (2 == option)
    {
        scanf("%d", &bit);
        clearBit(&attendance,bit);
        
    }else if (3 == option)
    {
        for (int bit = sizeof(attendance) * __CHAR_BIT__; bit >=0 ; bit--)
        {
            printf("%d", !! (attendance&(1<<bit)));
        }
        putchar('\n');
    }else if (4 == option)
    {
        scanf("%d", &bit);
        flipBit(&attendance,bit);
        
    }else if (5 == option)
    {
        break;
        
    }else printf("Invalid option\n");
} 
    return 0;
}