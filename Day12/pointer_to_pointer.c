#include <stdio.h>
void fun(int b)
{
    b = 1000;
    printf("%d",b);

}
int main()
{
    int a = 10;
    printf("%d\n",a);
    fun (a);
    printf("%d\n",a);
}
