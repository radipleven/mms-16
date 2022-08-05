#include <stdio.h>
#include "comparators.h"


int sumOfDigits(double num)
{
    int result =0;
    while (num !=0)
    {
        result += ((int)num %10);
        num /=10;
    }
    return result;
}

double randreal()
{
    return (double)rand() / 100000000;
}
int compD1(const void* num1,const void*  num2) // ascending
{
    double eps = 0.01;
    double a = *(double*)num1;
    double b = *(double*)num2;
    if (fabs(a-b)<eps)
    {
        return 0;
    }else if(a>b)
    {
        return 1;
    }
    return -1;
    
}

int compD2(const void* num1,const void*  num2)//descending
{
    double eps = 0.01;
    double a = *(double*)num1;
    double b = *(double*)num2;
    if (fabs(b-a)<eps)
    {
        return 0;
    }else if(b>a)
    {
        return 1;
    }
    return -1;
    
}

int compD3(const void* num1,const void*  num2) ///sum of digits
{
    double a = *(double*)num1;
    double b = *(double*)num2;
    if (fabs(sumOfDigits(a)<sumOfDigits(b)))
    {
        return 0;
    }else if(sumOfDigits(a)>sumOfDigits(b))
    {
        return 1;
    }
    return -1;
    
}
int compD4(const void* num1,const void*  num2) // abs
{
    double a = *(double*)num1;
    double b = *(double*)num2;
    if (a<b)
    {
        return 0;
    }else if(a>b)
    {
        return 1;
    }
    return -1;
    
}

void randinit(void)
{
     srand(time(NULL));
}