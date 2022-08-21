#include <stdio.h>
#include <stdlib.h>
int compareIntl(const void* num1, const void* num2)
{
   return *(int*)num2 - *(int*)num1;
    
}
int sum( int* arr, int n)
{
    int res =0;
    for (int i = 0; i < n; i++) res+= arr[i];
    return res;
}
void arrayEvaluate(int* arr, size_t n, int(*f)(int*, int))
{
    printf("Value: %d\n", f(arr,n));
}
int main()
{
    
    int arr[] = {12,34,5,70,46 };
    int sum1 = sum(arr,5);
    
    arrayEvaluate(arr,5,sum);
    return 0;
}