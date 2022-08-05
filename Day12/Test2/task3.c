#include <stdio.h>
#include <string.h>
char odd(char i)
{
    char result;
    switch (i)
    {
    case '0':result = 'A'; break;
    case '1':result = 'B'; break;
    case '2':result = 'C'; break;
    case '3':result = 'D'; break;
    case '4':result = 'E'; break;
    case '5':result = 'F'; break;
    case '6':result = 'G'; break;
    case '7':result = 'H'; break;
    case '8':result = 'I'; break;
    case '9':result = 'J'; break;
    }
    return result;
}

char even(char i)
{
    char result;
    switch (i)
    {
    case '0':result = '!'; break;
    case '1':result = '#'; break;
    case '2':result = '/'; break;
    case '3':result = '~'; break;
    case '4':result = '='; break;
    case '5':result = '\''; break;
    case '6':result = '\\'; break;
    case '7':result = '>'; break;
    case '8':result = '.'; break;
    case '9':result = '`'; break;
    }
    return result;
}
int main()
{

    char number[500];
    scanf("%s", number);
   // printf("%s\n", number);

    int i;
    for (i = 0; i < strlen(number); i++)
    {
        if (i %2 ==0)
        {
            number[i] = odd(number[i]);
        }else number[i]= even(number[i]);
        
    }

    int j;
    /*
    for ( j = 0; j < strlen(number); j++)
    {
        printf("%c", number[j]);
    }
    putchar('\n');
    */

    return 0;
}