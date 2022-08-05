#include <stdio.h>

void printValue(int num)
{
    printf("Value; %d\n", num);
}

void printHello(int count)
{
    int i;
    for (i = 0; i < count; i++)
    {
        printf("Hello");
    }
    putchar('\n');
}

void map (int* arr, int len, int (*f)(int))
{
    int i;
    for ( i = 0; i < len; i++)
    {
        arr[i]=f(arr[i]);
    }
    
}
int doubleNum(int num)
{
    return 2*num;
}
int main()
{   
    int arr[] ={1,2,3,4,5};
    map(arr,5,doubleNum);
    
    /*
    void(*fp)(int);
    fp = &printHello;
    (*fp)(5);
    fp = &printValue;
    (*fp)(5);
    */

    void (*fp[2])(int);
    fp[0] = printHello;
    fp[1] = printValue;
    fp[0](4);
    fp[1](4);
    return 0;
}