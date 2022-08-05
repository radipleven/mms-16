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
double sum (int a, int b)
{
    return a+b;
}
double sub (int a, int b)
{
    return a-b;
}
double mult (int a, int b)
{
    return a*b;
}
double div (int a, int b)
{
    return a/b;
}
// typedef int(*operation_t)(int, int)
int (*getOp(char operation))(int,int) // <-> operation_t getOp(char operation{...})
{
    switch (operation)
    {
    case '+': return sum;
    case '-': return sub;
    case '*': return mult;
    case '/': return div;
    default: return NULL;
    }
    
}

int main()
{   
    int a =5,b=6;
    char operation;
    scanf("%c", &operation);
    printf("%.2lf\n", getOp(operation)(a,b));
    return 0;
}