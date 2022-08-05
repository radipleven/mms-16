#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MIN 10
#define MAX 50 
#define COUNT 15

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
int main()
{

    double arr[COUNT];

    int i;
    for ( i = 0; i < COUNT; i++)
    {
        arr[i] = randreal();
    }

    for ( i = 0; i < COUNT; i++)
    {
        printf("%.2lf \n", arr[i]);
    }
    putchar('\n');

    
    qsort(arr,COUNT,sizeof(*arr),compD1);
    //qsort(arr,COUNT,sizeof(*arr),compD2);
    //qsort(arr,COUNT,sizeof(*arr),compD3);
    //qsort(arr,COUNT,sizeof(*arr),compD4);
    for ( i = 0; i < COUNT; i++)
    {
        printf("%.2lf \n", arr[i]);
    }
    putchar('\n');


    printf("%d \n", sumOfDigits(45.67));
    return 0;
}