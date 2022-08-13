#include <stdio.h>
#include <stdint.h>
#define TINT 1
#define TCHAR 'a'
#define TDBL 2
#define TFLT 3
#define TUI8 8
#define TUI16 16
#define TUI32 32
#define TUI64 64

void printValue(const void* valuePtr, uint8_t flag)
{
    switch(flag)
    {
        case TINT:  printf("%d\n",  *(int*)valuePtr);           break;
        case TCHAR: printf("%c\n",  *(char*)valuePtr);          break;
        case TDBL:  printf("%lf\n", *(double*)valuePtr);        break;
        case TFLT:  printf("%f\n",  *(float*)valuePtr);         break;
        case TUI8:  printf("%lu\n", *(uint8_t*)valuePtr);       break;
        case TUI16: printf("%lu\n", *(uint16_t*)valuePtr);      break;
        case TUI32: printf("%lu\n", *(uint32_t*)valuePtr);      break;
        case TUI64: printf("%lu\n", *(uint64_t*)valuePtr);      break;
        default:                                                break;
    }
}
int main()
{
    int number = 155;
    printValue(&number, TINT);
    double number2 = 2.77145;
    printValue(&number2, TDBL);
    char charr = 'a';
    printValue(&charr, TCHAR);
    return 0;
}