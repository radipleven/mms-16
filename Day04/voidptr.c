#include <stdio.h>

void printValue( void *value, int type)
{
    if(1 ==type)
    {
        printf("Value: %d\n", *(int*)value);
    }else if (2 == type)
    {
        printf("Value: %.2lf\n", *(double*)value);
    }else if (3 == type)
    {
        printf("Value: %c\n", *(char*)value);
    }
    
}

void printArray(int* arr, int length) // C style
{
for (int i = 0; i < length; i++)
{
    printf("%d ", arr[i]);
}
putchar('\n');
}

int main()
{
    
    int nums3[15];
    int nums2[2];
    int nums[10];
    

    //for (int i = 0; i < 6; i++)
    //{
    //    printf("%d\n", i[numbers]);
    //}
    for (int i = 0; i < 10; i++)
    {
       scanf("%d", nums2 +i);
    }

    printArray(nums2, 10);
    putchar('\n');

    
    return 0;
}