#include <stdio.h>
#include "random.h"

int compareInt1(const void* num1, const void* num2)
{
   return (*(int*)num1>*(int*)num2)?1:0;
    
}
int compareInt2(const void* num1, const void* num2)
{
   return (*(int*)num1<*(int*)num2)?1:0;
    
}
int compareInt3(const void* num1, const void* num2)
{
   return (abs(*(int*)num1)>abs(*(int*)num2))?1:0;
    
}

int compareInt4(const void* num1, const void* num2)
{
   return (abs(*(int*)num1)<abs(*(int*)num2))?1:0;
    
}

int main()
{
    randinit();

    int(*compArray[4])(const void*, const void*)= {compareInt1,compareInt2,compareInt3,compareInt4};
    qsort(compArray,4,sizeof(compArray[0]),compareInt1);
    return 0;
}