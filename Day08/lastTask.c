#include <stdio.h>
#include <math.h>
#include "randoms.c"

int compD(const void* num1,const void*  num2)
{
    double eps = 0.00001;
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
int main ()
{
    randinit();
    
    double arr[COUNT];

    int i;
    for ( i = 0; i < COUNT; i++)
    {
        arr[i] = randreal(1.0,102.0);
    }

    qsort(arr,COUNT,sizeof(*arr),compD);
    
    int j;
    for ( j = 0; j < COUNT; j++)
    {
        printf("%.4lf\n", arr[j]);
    }


}