#include <stdio.h>
#include <stdlib.h>
int compareIntl(const void* num1, const void* num2)
{
   return *(int*)num2 - *(int*)num1;
    
}
int secondMax(const int* arr, size_t n, int* secondMax)//returns 0 if success and 1 if not
{
    int flag = 1;
    if (1==n)
    {
        perror("array only has one element, there is no second largest\n");
        return 1;
    }
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]!=arr[i+1])
        {
            flag =0;
        }
    }
    if (1==flag)
    {
        perror("all elements are equal, there is no second largest");
        return 1;
    }
    
    int arr2[n];
    for (int i = 0; i < n; i++)  arr2[i]= arr[i];
    qsort(arr2,sizeof(arr2)/4,sizeof(arr2[0]),compareIntl);
    *secondMax=arr2[1];
    
    return 0;
    
}
int main()
{
    int sm;
    int arr[] = {12,34,5,70,46 };
    
    secondMax(arr,5,&sm);
    printf("%d\n", sm);
    return 0;
}