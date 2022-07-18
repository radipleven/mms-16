#include <stdio.h>

#define SETBIT (mask,bit) mask |= (1ULL << (bit))
#define CLEARBIT(mask,bit) mask &= ~(1ULL << (bit))
#define CHECKBIT(mask,bit) (mask &(1ULL <, (bit)))>> (bit)
#define FLIPBIT (mask,bit) mask^= (1ULL << (bit))
#define bool char
#define true 1
#define false 0

#define OS 6
#define A 3

int main()
{
    #if A==3
    printf("Hello, Windows");
    #endif

    #undef A
    #define A 4

    #if A==4
    printf("Hello, Windows");
    #endif

    #if OS ==1
    printf("Hello, Linux");
    #elif OS ==2
    printf("Hello, Windows");
    #elif OS ==3
    printf("Hello, MaxOS");
    #endif
    bool isOdd = true;
    if(isOdd)
    {
        printf("True\n");
    }else
    {
        printf("False\n");
    }
    putchar('\n');
    printf("%s\n", __FILE__);
    printf("%s\n", __TIME__);
    printf("%s\n", __TIMESTAMP__);
    printf("%d\n", __STDC__);
    printf("%d\n", __LINE__);

    return 0;
}
