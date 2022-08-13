#include <stdio.h>
#include <stdlib.h>
int digitCount(int n)
{
    int res =0;
    while (n !=0)
    {
        res += n%10;
        n/=10;
    }
    return res;
    
}
int sumArrayDigits(const int* arr, size_t n)
{
    
    int res =0;
    for (int i = 0; i < n; i++) res+= digitCount(arr[i]);
    
    return res;
    
}
int main()
{
    int res;
    int arr[] = {12,34,5,70 };
    res =sumArrayDigits(arr,4);
    printf("%d\n", res);
    return 0;
}