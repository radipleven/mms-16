#include <stdio.h>
int main()
{   
    int num;
    int max =0;
    while(scanf("%d", &num) != EOF)
    {
        if (num > max)
        {
            max = num;
        }
    }

    printf("%d\n", max);
    return 0;
}